#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "sprites.h"
#include "generated_data.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SPACING 3
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


/*const uint8_t pixelData[64][128] PROGMEM = {
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  // Ajoute les autres lignes ici
};*/

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

void drawSeq(uint8_t pos) {
  int seqSize = sizeof(percentages) / sizeof(percentages[0]);
  uint8_t display_width_max = SCREEN_WIDTH - 4 - 3; 
  uint8_t display_height_max = SCREEN_HEIGHT - SPRITE_HEIGHT - 5 - 3;
  uint8_t divided = display_width_max / seqSize;
  int height = display_height_max - (percentages[pos] * display_height_max) / 100;
  uint8_t posDivided = (pos * divided);
  // Horizontal line
  display.drawLine(SPACING + posDivided, SPACING + height, SPACING + posDivided + divided, SPACING + height, SSD1306_WHITE);
}

void setup() {
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  display.clearDisplay();

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

  /*// Dessiner chaque pixel de la matrice
  for (uint8_t y = 0; y < SCREEN_HEIGHT; y++) {
    for (uint8_t x = 0; x < SCREEN_WIDTH; x++) {
      if (pgm_read_byte(&(pixelData[y][x])) == 1) {
        display.drawPixel(x, y, SSD1306_WHITE);
      }
    }
  }*/


  int seqSize = sizeof(percentages) / sizeof(percentages[0]);
  // Draw simple horizontal line
  //display.drawLine(3, 3, SCREEN_WIDTH - 4, 3, SSD1306_WHITE);
  //display.drawLine(3, 3, 3, SCREEN_HEIGHT - SPRITE_HEIGHT - 5, SSD1306_WHITE);

  for (int i = 0; i < seqSize; i++) {
    drawSeq(i);
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
  convertSizeToCharArray(seqSize, sizeArray);
  displaySprite(23, sizeArray[0], 3);
  displaySprite(24, sizeArray[1], 3);

  display.display(); // Affiche tout
}

void loop() {
  // Rien à faire ici
}