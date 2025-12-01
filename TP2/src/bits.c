#include <stdio.h>

int main() {
    int d = 0x10001000;  // Valeur à tester (modifiable)

    int bit4gauche, bit20gauche;

    // Positions des bits (dans un entier 32 bits)
    int pos4 = 31 - 3;   // 4ème bit à partir de la gauche → bit 28
    int pos20 = 31 - 19; // 20ème bit à partir de la gauche → bit 12

    // Extraction : on décale à droite, puis on garde seulement le dernier bit (avec & 1)
    bit4gauche = (d >> pos4) & 1;
    bit20gauche = (d >> pos20) & 1;

    // Vérification : les deux bits doivent être égaux à 1
    if (bit4gauche == 1 && bit20gauche == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
