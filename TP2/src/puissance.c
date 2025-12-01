#include <stdio.h>

int main() {
    int a = 2;   // base
    int b = 3;   // exposant
    int resultat = 1;  // contiendra a^b

    // Calcul de a^b sans pow()
    for (int i = 1; i <= b; i++) {
        resultat *= a;
    }

    printf("%d élevé à la puissance %d = %d\n", a, b, resultat);

    return 0;
}
