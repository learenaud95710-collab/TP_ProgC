#include <stdio.h>

int main() {

    int somme = 0;

    for (int i = 1; i <= 1000; i++) {

        // Condition 1 : si divisible par 11 → on ignore (continue)
        if (i % 11 == 0) {
            continue;
        }

        // Condition 2 : si divisible par 5 OU 7 → ajouter à somme
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Condition 3 : si somme > 5000 → arrêter (break)
        if (somme > 5000) {
            break;
        }
    }

    // Affichage final
    printf("Somme finale = %d\n", somme);

    return 0;
}
