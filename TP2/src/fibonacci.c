#include <stdio.h>

int main() {
    int n;
    int U0 = 0, U1 = 1, Un;

    // Saisie de la valeur de n
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    // Vérification simple
    if (n < 0) {
        printf("Erreur : n doit être >= 0\n");
        return 1;
    }

    // Affichage des premiers termes
    printf("Suite de Fibonacci jusqu'à U%d :\n", n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    printf("%d, %d", U0, U1);  // affiche U0 et U1

    // Calcul et affichage des termes suivants
    for (int i = 2; i <= n; i++) {
        Un = U0 + U1;
        printf(", %d", Un);
        U0 = U1;
        U1 = Un;
    }

    printf("\n");

    return 0;
}
