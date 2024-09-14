//
// Created by Stéphane Bressani on 14.09.2024.
// sprites.h
//
// All the sprites I need for my SSD1306 (3 width / 6 height)
//

#ifndef SPRITES_H
#define SPRITES_H

#include <avr/pgmspace.h> // Nécessaire pour PROGMEM dans les fichiers externes

#define SPRITE_WIDTH 3
#define SPRITE_HEIGHT 6

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
        {0, 1, 0},
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

const uint8_t* sprites[] = {sprite0[0], sprite1[0], sprite2[0], sprite3[0], sprite4[0], sprite5[0], sprite6[0], sprite7[0], sprite8[0], sprite9[0], spriteB[0], spriteA[0], spriteN[0], spriteK[0], spriteP[0], spriteT[0], spriteE[0], spriteR[0], spriteS[0], spriteI[0], spriteZ[0], spriteSlash[0]};
const char spriteChars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'B', 'A', 'N', 'K', 'P', 'T', 'E', 'R', 'S', 'I', 'Z', '/'};

#endif