#include <stdio.h>

void afficher_binaire(unsigned int n) {
    int bits = sizeof(unsigned int) * 8;  // nombre de bits selon l'architecture
    int debut = 0; // pour éviter d'afficher les zéros de tête inutiles

    printf("0b");

    for (int i = bits - 1; i >= 0; i--) {
        if (n & (1U << i)) {   // test du i-ème bit
            printf("1");
            debut = 1;
        } else {
            if (debut) {
                printf("0");
            }
        }
    }

    if (!debut) {  // cas du nombre 0
        printf("0");
    }

    printf("\n");
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("Nombre : %u\tBinaire : ", nombres[i]);
        afficher_binaire(nombres[i]);
    }

    return 0;
}
