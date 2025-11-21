#include <stdio.h>

int main() {
    int n, i, j;

    // Saisie de la hauteur
    printf("Entrez la hauteur de la pyramide (entier positif) : ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erreur : saisie invalide.\n");
        return 1;
    }

    printf("\nPyramide de hauteur %d :\n\n", n);

    for (i = 1; i <= n; i++) {
        // 1. Afficher les espaces pour centrer les nombres
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2. Afficher les nombres croissants de 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3. Afficher les nombres décroissants de i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Passer à la ligne suivante après chaque niveau
        printf("\n");
    }

    printf("\nLa generation de la pyramide est terminee.\n");

    return 0;
}

