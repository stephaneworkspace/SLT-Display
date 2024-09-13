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

const uint8_t spriteR[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {1, 0, 1},
  {1, 1, 1},
  {1, 1, 0},
  {1, 0, 1},
  {1, 0, 1},
};

const uint8_t spriteS[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {1, 0, 0},
  {1, 1, 1},
  {0, 0, 1},
  {0, 0, 1},
  {1, 1, 1},
};

const uint8_t spriteI[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {0, 1, 0},
  {0, 1, 0},
  {0, 1, 0},
  {0, 1, 0},
  {1, 1, 1},
};

const uint8_t spriteZ[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {1, 1, 1},
  {0, 0, 1},
  {0, 1, 0},
  {0, 1, 0},
  {1, 0, 0},
  {1, 1, 1},
};

const uint8_t spriteSlash[SPRITE_HEIGHT][SPRITE_WIDTH] PROGMEM = {
  {0, 0, 1},
  {0, 0, 1},
  {0, 1, 0},
  {0, 1, 0},
  {1, 0, 0},
  {1, 0, 0},
};

// Tableau de correspondance entre les caractères et les sprites
const uint8_t* sprites[] = {sprite0[0], sprite1[0], sprite2[0], sprite3[0], sprite4[0], sprite5[0], sprite6[0], sprite7[0], sprite8[0], sprite9[0], spriteB[0], spriteA[0], spriteN[0], spriteK[0], spriteP[0], spriteT[0], spriteE[0], spriteR[0], spriteS[0], spriteI[0], spriteZ[0], spriteSlash[0]};

const char spriteChars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'B', 'A', 'N', 'K', 'P', 'T', 'E', 'R', 'S', 'I', 'Z', '/'};


const uint8_t pixelData[64][128] PROGMEM = {
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  // Ajoute les autres lignes ici
};

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
  displaySprite(19, ' ');
  displaySprite(20, '1', 3);
  displaySprite(21, '6', 3);
  displaySprite(22, '/', 3);
  displaySprite(23, '1', 3);
  displaySprite(24, '6', 3);

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

void loop() {
  // Rien à faire ici
}