#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SPRITE_WIDTH 3
#define SPRITE_HEIGHT 6
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const uint8_t sprite0[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {1, 0, 1},
  {1, 0, 1},
  {1, 0, 1},
  {1, 0, 1},
  {1, 1, 1},
};

const uint8_t sprite1[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 0},
  {0, 1, 0},
  {0, 1, 0},
  {0, 1, 0},
  {0, 1, 0},
  {1, 1, 1},
};

const uint8_t sprite2[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {1, 0, 1},
  {1, 0, 1},
  {0, 0, 1},
  {0, 1, 0},
  {1, 1, 1},
};

const uint8_t sprite3[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {0, 0, 1},
  {0, 0, 1},
  {0, 1, 1},
  {0, 0, 1},
  {1, 1, 1},
};

const uint8_t sprite4[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {0, 0, 1},
  {0, 1, 0},
  {1, 0, 0},
  {1, 1, 1},
  {0, 1, 0},
  {0, 1, 0},
};

const uint8_t sprite5[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {1, 0, 0},
  {1, 1, 0},
  {0, 0, 1},
  {0, 0, 1},
  {1, 1, 1},
};

const uint8_t sprite6[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {1, 0, 0},
  {1, 0, 0},
  {1, 1, 1},
  {1, 0, 1},
  {1, 1, 1},
};

const uint8_t sprite7[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {0, 0, 1},
  {0, 1, 0},
  {0, 1, 0},
  {1, 0, 0},
  {1, 0, 0},
};

const uint8_t sprite8[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {1, 0, 1},
  {1, 0, 1},
  {1, 1, 1},
  {1, 0, 1},
  {1, 1, 1},
};

const uint8_t sprite9[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {1, 0, 1},
  {1, 1, 1},
  {0, 0, 1},
  {0, 0, 1},
  {1, 1, 1},
};

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

const uint8_t spriteP[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {1, 0, 1},
  {1, 1, 1},
  {1, 0, 0},
  {1, 0, 0},
  {1, 0, 0},
};

const uint8_t spriteT[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {0, 1, 0},
  {0, 1, 0},
  {0, 1, 0},
  {0, 1, 0},
  {0, 1, 0},
};

const uint8_t spriteE[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {1, 0, 0},
  {1, 1, 0},
  {1, 0, 0},
  {1, 0, 0},
  {1, 1, 1},
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
        case '0':
          if (pgm_read_byte(&(sprite0[y][x])) == 1) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;
        case '1':
          if (pgm_read_byte(&(sprite1[y][x])) == 1) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;   
        case '2':
          if (pgm_read_byte(&(sprite2[y][x])) == 2) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;
        case '3':
          if (pgm_read_byte(&(sprite3[y][x])) == 3) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;
        case '4':
          if (pgm_read_byte(&(sprite4[y][x])) == 1) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;
        case '5':
          if (pgm_read_byte(&(sprite5[y][x])) == 1) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;   
        case '6':
          if (pgm_read_byte(&(sprite6[y][x])) == 1) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;
        case '7':
          if (pgm_read_byte(&(sprite7[y][x])) == 1) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;
        case '8':
          if (pgm_read_byte(&(sprite8[y][x])) == 1) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;
        case '9':
          if (pgm_read_byte(&(sprite9[y][x])) == 3) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;
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
        case 'P':
          if (pgm_read_byte(&(spriteP[y][x])) == 1) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;  
        case 'T':
          if (pgm_read_byte(&(spriteT[y][x])) == 1) {
            display.drawPixel(x + 1 + (position * (SPRITE_WIDTH + 2)), y + SCREEN_HEIGHT - SPRITE_HEIGHT, SSD1306_WHITE);
          }
          break;  
        case 'E':
          if (pgm_read_byte(&(spriteE[y][x])) == 1) {
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