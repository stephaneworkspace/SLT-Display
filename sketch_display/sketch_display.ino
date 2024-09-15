#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "sprites.h"
#include "generated_data.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SPACING 3
// DISPLAY_WIDTH_MAX = SCREEN_WIDTH - 4 - 3; 
// DISPLAY_HEIGHT_MAX = SCREEN_HEIGHT - SPRITE_HEIGHT - 5 - 3;
#define DISPLAY_WIDTH_MAX 121
#define DISPLAY_HEIGHT_MAX 50

#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void displaySprite(uint8_t position, char spriteChar, uint8_t offset = 0) {
  const uint8_t* selectedSprite = nullptr;

  // Trouver le sprite correspondant au caractère
  for (uint8_t i = 0; i < sizeof(spriteChars); i++) {
    if (spriteChars[i] == spriteChar) {
      selectedSprite = sprites[i];
      break;
    }
  }

  // Si le sprite est trouvé, afficher
  if (selectedSprite) {
    for (uint8_t y = 0; y < SPRITE_HEIGHT; y++) {
      for (uint8_t x = 0; x < SPRITE_WIDTH; x++) {
        if (pgm_read_byte(&(selectedSprite[y * SPRITE_WIDTH + x])) == 1) {
          display.drawPixel(offset + x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
        }
      }
    }
  }
}

void drawSeq(SequenceStep* steps, uint8_t pos, uint8_t offset, uint8_t divided, int count) {
  uint8_t sizeComputed = count * divided;
  uint8_t height = DISPLAY_HEIGHT_MAX - (steps[pos].percentage * DISPLAY_HEIGHT_MAX) / 100;
  uint8_t posDivided = (pos * divided);

  uint8_t heightEnd = 0;
  if (pos < count - 1) {
    heightEnd = DISPLAY_HEIGHT_MAX - (steps[pos + 1].percentage * DISPLAY_HEIGHT_MAX) / 100;
  } else {
    heightEnd = DISPLAY_HEIGHT_MAX - (steps[0].percentage * DISPLAY_HEIGHT_MAX) / 100;
  }
  if (steps[pos].isRamp) {
    // Ramp 0%
    display.drawLine(
      SPACING + offset + posDivided, 
      SPACING + height, 
      SPACING + offset + posDivided + divided, 
      SPACING + heightEnd, 
      SSD1306_WHITE);
  } else {
    // Horizontal line
    display.drawLine(
      SPACING + offset + posDivided, 
      SPACING + height, 
      SPACING + offset + posDivided + divided, 
      SPACING + height, 
      SSD1306_WHITE);
    // Vertical line
    display.drawLine(
      SPACING + offset + posDivided + divided, 
      SPACING + height, 
      SPACING + offset + posDivided + divided, 
      SPACING + heightEnd, 
      SSD1306_WHITE);
  }
}

void setup() {
    // Initialisation de la communication série à 9600 bauds
  Serial.begin(9600);
  
  // Attendre que la console soit prête (utile sur certains systèmes)
  while (!Serial) {
    ; // Ne rien faire tant que la connexion série n'est pas établie
  }

  Serial.print("Step Lfo Table - Display");

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  display.clearDisplay();

  // Calculer la taille du tableau descriptions[]
  int count = getDescriptionCount();

  // Allouer dynamiquement un tableau de SequenceStep
  SequenceStep* steps = (SequenceStep*)malloc(count * sizeof(SequenceStep));

  // Vérifier si la mémoire a bien été allouée
  if (steps == NULL) {
    Serial.println("Erreur d'allocation mémoire");
    return;
  }

  // Parcourir les descriptions et remplir les séquences
  for (int i = 0; i < count; i++) {
    steps[i] = parseDescription(descriptions[i]);
  }

  // Cadre
  display.drawRect(1, 1, SCREEN_WIDTH - 2, SCREEN_HEIGHT-9, SSD1306_WHITE);
  
  // écriture B en position
  for (uint8_t y = 0; y < SPRITE_HEIGHT; y++) {
    for (uint8_t x = 0; x < SPRITE_WIDTH; x++) {
      if (pgm_read_byte(&(spriteB[y][x])) == 1) {
        display.drawPixel(x + 1, y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
      }
    }
  }

  uint8_t divided = DISPLAY_WIDTH_MAX / count;
  uint8_t offset = (DISPLAY_WIDTH_MAX - (divided * count)) / 2;
  if ((DISPLAY_WIDTH_MAX - (divided * count)) % 2 != 0) {
    offset++;  // Ajouter 1 si la division n'était pas exacte
  }
  for (int i = 0; i < count; i++) {
    drawSeq(steps, i, offset, divided, count);
  }

  // Display sprites
  displaySprite(0, 'B');
  displaySprite(1, 'A');
  displaySprite(2, 'N');
  displaySprite(3, 'K');
  displaySprite(4, ' ');
  displaySprite(5, '0');
  displaySprite(6, '1');
  displaySprite(7, ' ');
  displaySprite(8, 'P');
  displaySprite(9, 'A');
  displaySprite(10, 'T');
  displaySprite(11, 'T');
  displaySprite(12, 'E');
  displaySprite(13, 'R');
  displaySprite(14, 'N');
  displaySprite(15, ' ');
  displaySprite(16, '0');
  displaySprite(17, '0');
  displaySprite(18, '1');
  displaySprite(19, ' ');
  displaySprite(20, '1', 3);
  displaySprite(21, '6', 3);
  displaySprite(22, '/', 3);
  char sizeArray[2];
  convertSizeToCharArray(count, sizeArray);
  displaySprite(23, sizeArray[0], 3);
  displaySprite(24, sizeArray[1], 3);

  display.display(); // Affiche tout

  // Libérer la mémoire allouée
  free(steps);
}

void loop() {
  // Rien à faire ici
}