#include <stdio.h>

int main() {
    char noms[5][30];
    char prenoms[5][30];
    char adresses[5][50];
    float note_prog[5];
    float note_sys[5];

    printf("=== Saisie des informations des 5 etudiants ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);

        printf("Nom : ");
        scanf("%s", noms[i]);

        printf("Prenom : ");
        scanf("%s", prenoms[i]);

        printf("Adresse (un seul mot ou remplacez les espaces par _) : ");
        scanf("%s", adresses[i]);

        printf("Note en Programmation C : ");
        scanf("%f", &note_prog[i]);

        printf("Note en Systeme d'exploitation : ");
        scanf("%f", &note_sys[i]);

        printf("\n");
    }

    printf("\n=== Affichage des informations ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom        : %s\n", noms[i]);
        printf("Prenom     : %s\n", prenoms[i]);
        printf("Adresse    : %s\n", adresses[i]);
        printf("Note C     : %.2f\n", note_prog[i]);
        printf("Note SE    : %.2f\n", note_sys[i]);
        printf("-----------------------------\n");
    }

    return 0;
}
