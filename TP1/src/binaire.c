#include <stdio.h>

void afficher_binaire(unsigned int n) {
    int bits = sizeof(unsigned int) * 8;  // nombre de bits selon l'architecture
    int debut = 0; // pour éviter d'afficher les zéros de tête inutiles

    printf("Binaire : 0b");

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
    unsigned int nombre;

    printf("Entrez un nombre entier positif : ");
    if (scanf("%u", &nombre) != 1) {
        printf("Erreur : saisie invalide.\n");
        return 1;
    }

    afficher_binaire(nombre);

    return 0;
}
