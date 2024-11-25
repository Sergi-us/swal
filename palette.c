#include <stdio.h>
#include <stdlib.h>
#include "palette.h"

#define PALETTE_SIZE 16

void extract_palette_from_raw(const char *file_path, char colors[PALETTE_SIZE][8], int width, int height) {
    FILE *file = fopen(file_path, "rb");
    if (!file) {
        printf("Error: Cannot open file %s\n", file_path);
        return;
    }

    int size = width * height * 3; // RGB hat 3 Kanäle
    unsigned char *data = malloc(size);
    fread(data, 1, size, file);
    fclose(file);

    for (int i = 0; i < PALETTE_SIZE; i++) {
        int idx = (i * 10) % size;
        snprintf(colors[i], 8, "#%02X%02X%02X", data[idx], data[idx + 1], data[idx + 2]);
    }

    free(data);
}

