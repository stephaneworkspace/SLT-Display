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
/*const int percentages[] = {
        0, 25, 50, 100, 70, 100, 0, 55
        //0, 70, 0, 95, 0, 30, 0, 75,
        //0, 25, 50, 100, 70, 100, 0, 55, 0, 70, 0, 95, 0, 30, 0, 75,
        // 0, 25, 50, 100, 70, 100, 0, 55, 0, 70, 0, 95, 0, 30, 0, 75,
        // 0, 25, 50, 100, 70, 100, 0, 55, 0, 70, 0, 95, 0, 30, 0, 75
};*/

struct SequenceStep {
    int percentage;     // Valeur en pourcentage
    bool isRamp;        // Indique si c'est une ramp
    int rampPercentage; // Pourcentage optionnel pour la ramp (0 si non applicable)
};

const char* descriptions[] = {
        "0%",
        "25% ramp 25%",
        "50%",
        "100%",
        "70%",
        "100%",
        "0%",
        "55%"
};
/*
String descriptions[] = {
        "0%",
        "25% ramp 25%",
        "50%",
        "100%",
        "70%",
        "100%"
};*/

// Fonction pour calculer la taille du tableau descriptions[]
int getDescriptionCount() {
    return sizeof(descriptions) / sizeof(descriptions[0]);
}

// Fonction pour analyser une description et créer un SequenceStep
SequenceStep parseDescription(String description) {
    SequenceStep step;
    int rampIndex = description.indexOf("ramp");

    // Si "ramp" est trouvé dans la chaîne
    if (rampIndex != -1) {
        step.isRamp = true;

        // Extraire le premier pourcentage (avant "ramp")
        step.percentage = description.substring(0, rampIndex - 1).toInt();

        // Extraire le pourcentage de la ramp (après "ramp")
        step.rampPercentage = description.substring(rampIndex + 5).toInt();
    } else {
        step.isRamp = false;

        // Extraire le pourcentage directement
        step.percentage = description.substring(0, description.length() - 1).toInt();

        // Pas de ramp, donc rampPercentage est 0
        step.rampPercentage = 0;
    }

    return step;
}

void convertSizeToCharArray(int size, char result[2]) {
    if (size >= 0 && size <= 9) {
        // Si le nombre est à un seul chiffre, ajouter un '0' devant
        result[0] = '0';
        result[1] = size + '0';  // Convertir le chiffre en caractère ASCII
    } else if (size >= 10 && size <= 99) {
        // Si le nombre est à deux chiffres
        result[0] = (size / 10) + '0';  // Convertir le premier chiffre
        result[1] = (size % 10) + '0';  // Convertir le second chiffre
    }
}

#endif // GENERATED_DATA_H