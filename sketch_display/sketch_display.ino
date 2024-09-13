#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SPRITE_WIDTH 3
#define SPRITE_HEIGHT 6
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const uint8_t spriteB[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {1, 0, 1},
  {1, 0, 1},
  {1, 1, 1},
  {1, 0, 1},
  {1, 1, 1},
};

const uint8_t spriteA[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {1, 0, 1},
  {1, 1, 1},
  {1, 0, 1},
  {1, 0, 1},
  {1, 0, 1},
};

const uint8_t spriteN[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {1, 0, 1},
  {1, 0, 1},
  {1, 0, 1},
  {1, 0, 1},
  {1, 0, 1},
};

const uint8_t spriteK[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 0, 1},
  {1, 0, 1},
  {1, 1, 0},
  {1, 0, 1},
  {1, 0, 1},
  {1, 0, 1},
};

const uint8_t pixelData[64][128] PROGMEM = {
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  // Ajoute les autres lignes ici
};

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

  //for (uint8_t x = 0; x < 10; x++) {
  //  displaySprite(x, 'B');
  //}
  displaySprite(0, 'B');
  displaySprite(1, 'A');
  displaySprite(2, 'N');
  displaySprite(3, 'K');

  // Dessiner chaque pixel de la matrice
  for (uint8_t y = 0; y < SCREEN_HEIGHT; y++) {
    for (uint8_t x = 0; x < SCREEN_WIDTH; x++) {
      if (pgm_read_byte(&(pixelData[y][x])) == 1) {
        display.drawPixel(x, y, SSD1306_WHITE);
      }
    }
  }


  display.display(); // Affiche tout
}

void displaySprite(uint8_t position, char spriteChar) {
  for (uint8_t y = 0; y < SPRITE_HEIGHT; y++) {
    for (uint8_t x = 0; x < SPRITE_WIDTH; x++) {
      switch(spriteChar) {
        case 'B':
          if (pgm_read_byte(&(spriteB[y][x])) == 1) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;
        case 'A':
          if (pgm_read_byte(&(spriteA[y][x])) == 1) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;   
        case 'N':
          if (pgm_read_byte(&(spriteN[y][x])) == 1) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;
        case 'K':
          if (pgm_read_byte(&(spriteK[y][x])) == 1) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;  
      }
    }
  }
}

void loop() {
  // Rien à faire ici
}