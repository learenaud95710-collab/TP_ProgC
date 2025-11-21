#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Saisie de num1
    printf("Entrez le premier nombre : ");
    if (scanf("%d", &num1) != 1) {
        printf("Erreur : saisie invalide.\n");
        return 1;
    }

    // Saisie de num2
    printf("Entrez le second nombre : ");
    if (scanf("%d", &num2) != 1) {
        printf("Erreur : saisie invalide.\n");
        return 1;
    }

    // Vider le tampon pour éviter que le retour à la ligne ne soit lu
    while (getchar() != '\n');

    // Saisie de l'opérateur
    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    if (scanf("%c", &op) != 1) {
        printf("Erreur : saisie invalide.\n");
        return 1;
    }

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Erreur : division par zéro\n");
            break;

        case '%':
            if (num2 != 0)
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Erreur : modulo par zéro\n");
            break;

        case '&':
            printf("%d & %d = %d\n", num1, num2, num1 & num2);
            break;

        case '|':
            printf("%d | %d = %d\n", num1, num2, num1 | num2);
            break;

        case '~':
            printf("~%d = %d\n", num1, ~num1);
            break;

        default:
            printf("Operateur inconnu : %c\n", op);
            break;
    }

    return 0;
}


