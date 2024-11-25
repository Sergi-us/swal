#ifndef PALETTE_H
#define PALETTE_H

#define PALETTE_SIZE 16

void extract_palette_from_data(const unsigned char *data, char colors[PALETTE_SIZE][8], int size);
void extract_palette_from_raw(const char *file_path, char colors[PALETTE_SIZE][8], int width, int height);

#endif

