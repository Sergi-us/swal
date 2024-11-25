#include <stdio.h>
#include "palette.h"

int main() {
    char colors[PALETTE_SIZE][8];

    /* Beispiel für eine Rohdaten-Datei */
    const char *file_path = "current.rgb"; // Pfad zur RGB-Datei
    extract_palette_from_raw(file_path, colors, 1920, 1080); // Breite und Höhe des Bildes

    /* Ergebnisse ausgeben */
    for (int i = 0; i < PALETTE_SIZE; i++) {
        printf("Color %d: %s\n", i + 1, colors[i]);
    }

    return 0;
}

