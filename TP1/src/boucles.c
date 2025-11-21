#include <stdio.h>

int main() {

    int compteur = 5;  // Taille des triangles (< 10)

    if (compteur >= 10) {
        printf("Erreur : compteur doit être strictement inférieur à 10.\n");
        return 1;
    }

    printf("=== Triangle avec boucles FOR ===\n");

    // Triangle avec FOR
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // Conditions pour afficher * ou #
            if (i == 1 || i == 2 || i == compteur) {
                printf("* ");
            } else {
                if (j == 1 || j == i)
                    printf("* ");
                else
                    printf("# ");
            }
        }
        printf("\n");
    }

    printf("\n=== Triangle avec boucles WHILE ===\n");

    // Triangle avec WHILE
    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (i == 1 || i == 2 || i == compteur) {
                printf("* ");
            } else {
                if (j == 1 || j == i)
                    printf("* ");
                else
                    printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

