#include <stdio.h>

int main() {
    int d;
    int bit4gauche, bit20gauche;

    // Saisie de la valeur
    printf("Entrez la valeur de d : ");
    scanf("%d", &d);

    // Positions des bits dans un entier 32 bits
    int pos4 = 31 - 3;   // 4ème bit de gauche = bit 28
    int pos20 = 31 - 19; // 20ème bit de gauche = bit 12

    // Extraction des bits
    bit4gauche = (d >> pos4) & 1;
    bit20gauche = (d >> pos20) & 1;

    // Vérification
    if (bit4gauche == 1 && bit20gauche == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
