#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[80];
    float note1;   // Programmation C
    float note2;   // Système d'exploitation
};

int main() {
    struct Etudiant etudiants[5];

    printf("=== Saisie des informations pour 5 etudiants ===\n\n");

    for (int i = 0; i < 5; i++) {
        char temp[80]; // tampon pour fgets

        printf("Etudiant %d :\n", i + 1);

        printf("Nom : ");
        scanf("%s", temp);
        strcpy(etudiants[i].nom, temp);

        printf("Prenom : ");
        scanf("%s", temp);
        strcpy(etudiants[i].prenom, temp);

        printf("Adresse (sans espace ou remplacez par _) : ");
        scanf("%s", temp);
        strcpy(etudiants[i].adresse, temp);

        printf("Note 1 (Programmation C) : ");
        scanf("%f", &etudiants[i].note1);

        printf("Note 2 (Systeme d'exploitation) : ");
        scanf("%f", &etudiants[i].note2);

        printf("\n");
    }

    printf("\n=== Affichage des informations ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom      : %s\n", etudiants[i].nom);
        printf("Prenom   : %s\n", etudiants[i].prenom);
        printf("Adresse  : %s\n", etudiants[i].adresse);
        printf("Note 1   : %.2f\n", etudiants[i].note1);
        printf("Note 2   : %.2f\n", etudiants[i].note2);
        printf("-------------------------------\n");
    }

    return 0;
}
