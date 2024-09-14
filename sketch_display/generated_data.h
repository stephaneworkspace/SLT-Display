//
// Created by Stéphane Bressani on 14.09.2024.
// generate_data.h
//
// Static Sequence, this project doesn't have to goal of do something more complex
// I use my Ardiuno uno only for design the UI core for SSD1306
// I want doing something more complex later on Bela mini
//

#ifndef GENERATED_DATA_H
#define GENERATED_DATA_H

// Tableau généré automatiquement à partir du fichier data.txt
const int percentages[] = {
        0, 25, 50, 100, 70,100, 0, 55, 0, 70, 0, 95, 0, 30, 0, 75
        //0, 25, 50, 100, 70, 100, 0, 55, 0, 70, 0, 95, 0, 30, 0, 75,
        // 0, 25, 50, 100, 70, 100, 0, 55, 0, 70, 0, 95, 0, 30, 0, 75,
        // 0, 25, 50, 100, 70, 100, 0, 55, 0, 70, 0, 95, 0, 30, 0, 75
};

void convertSizeToCharArray(int size, char result[2]) {
    // Vérifier que la taille est un nombre à deux chiffres
    if (size >= 10 && size <= 99) {
        // Extraire le premier chiffre et le convertir en caractère
        result[0] = (size / 10) + '0';  // Convertir le chiffre en caractère ASCII
        // Extraire le deuxième chiffre et le convertir en caractère
        result[1] = (size % 10) + '0';  // Convertir le chiffre en caractère ASCII
    }
}

#endif // GENERATED_DATA_H