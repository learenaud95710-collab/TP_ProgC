#include <stdio.h>

int main() {

    int compteur = 5;  // Modifiez cette valeur (doit être < 10)

    if (compteur >= 10) {
        printf("Erreur : compteur doit être strictement inférieur à 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {

            // Exemple de motif :
            // Ligne 1 : *
            // Ligne 2 : * *
            // Ligne 3 : * # *
            // Ligne 4 : * # # *
            // Ligne 5 : * * * * *
            
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

    return 0;
}
