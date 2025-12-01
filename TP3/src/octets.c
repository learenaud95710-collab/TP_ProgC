#include <stdio.h>

void afficher_octets(void *ptr, size_t taille) {
    unsigned char *p = (unsigned char *)ptr;

    for (size_t i = 0; i < taille; i++) {
        printf("%02x ", p[i]);   // chaque octet en hexadécimal
    }
    printf("\n");
}

int main() {

    short s = 0x0203;
    int i = 0x01020304;
    long int li = 0x0102030405060708;
    float f = 4.5f;
    double d = 3.141592653589793;
    long double ld = 2.718281828459045L;

    printf("Octets de short (%zu octets) :\n", sizeof(short));
    afficher_octets(&s, sizeof(short));
    printf("\n");

    printf("Octets de int (%zu octets) :\n", sizeof(int));
    afficher_octets(&i, sizeof(int));
    printf("\n");

    printf("Octets de long int (%zu octets) :\n", sizeof(long int));
    afficher_octets(&li, sizeof(long int));
    printf("\n");

    printf("Octets de float (%zu octets) :\n", sizeof(float));
    afficher_octets(&f, sizeof(float));
    printf("\n");

    printf("Octets de double (%zu octets) :\n", sizeof(double));
    afficher_octets(&d, sizeof(double));
    printf("\n");

    printf("Octets de long double (%zu octets) :\n", sizeof(long double));
    afficher_octets(&ld, sizeof(long double));
    printf("\n");

    return 0;
}
