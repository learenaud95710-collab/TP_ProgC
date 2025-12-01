#include <stdio.h>

struct Couleur {
    unsigned char r;  // Rouge
    unsigned char g;  // Vert
    unsigned char b;  // Bleu
    unsigned char a;  // Alpha
};

int main() {
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0xaa, 0x11, 0x44, 0xff},
        {0x00, 0x88, 0xff, 0xff},
        {0xff, 0x00, 0x80, 0xff},
        {0x10, 0x20, 0x30, 0xff},
        {0xf0, 0xe0, 0xd0, 0xff},
        {0x33, 0x66, 0x99, 0xff},
        {0x12, 0x34, 0x56, 0xff},
        {0xdd, 0xbb, 0x22, 0xff}
    };

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert  : %d\n", couleurs[i].g);
        printf("Bleu  : %d\n", couleurs[i].b);
        printf("Alpha : %d\n", couleurs[i].a);
        printf("------------------------\n");
    }

    return 0;
}
