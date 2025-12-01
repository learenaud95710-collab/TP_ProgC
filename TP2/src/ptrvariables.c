#include <stdio.h>
#include <stdint.h>

int main() {

    /* Variables de base */
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x11223344;
    long long int lli = 0x1122334455667788;
    float f = 1.0f;               // sera affiché via représentation binaire
    double d = 2.0;               // pareil
    long double ld = 3.0L;

    /* Pointeurs */
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    /* Affichage AVANT manipulation */
    printf("===== AVANT MANIPULATION =====\n");

    printf("Adresse de c  : %p | Valeur : %02x\n", (void*)pc,  (unsigned char)c);
    printf("Adresse de s  : %p | Valeur : %04hx\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i  : %p | Valeur : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p | Valeur : %08lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli: %p | Valeur : %016llx\n", (void*)plli, (unsigned long long)lli);

    /* Affichage float/double comme bytes */
    printf("Adresse de f  : %p | Valeur : %08x\n", (void*)pf, *(uint32_t*)&f);
    printf("Adresse de d  : %p | Valeur : %016llx\n", (void*)pd, *(uint64_t*)&d);

    /* Pour long double : 80 bits selon machine, on affiche 16 bytes */
    unsigned char *bytes = (unsigned char*)&ld;
    printf("Adresse de ld : %p | Valeur : ", (void*)pld);
    for (int k = sizeof(long double)-1; k >= 0; k--)
        printf("%02x", bytes[k]);
    printf("\n");


    /* --------------------- MANIPULATION VIA POINTEURS --------------------- */

    *pc  = 0x34;
    *ps  = 0xabcd;
    *pi  = 0xdeadbeef;
    *pli = 0xaabbccdd;
    *plli = 0x0102030405060708;

    *pf = 2.0f;
    *pd = 4.0;
    *pld = 5.0L;


    /* Affichage APRÈS manipulation */
    printf("\n===== APRES MANIPULATION =====\n");

    printf("Adresse de c  : %p | Valeur : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s  : %p | Valeur : %04hx\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i  : %p | Valeur : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p | Valeur : %08lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli: %p | Valeur : %016llx\n", (void*)plli, (unsigned long long)lli);

    printf("Adresse de f  : %p | Valeur : %08x\n", (void*)pf, *(uint32_t*)&f);
    printf("Adresse de d  : %p | Valeur : %016llx\n", (void*)pd, *(uint64_t*)&d);

    bytes = (unsigned char*)&ld;
    printf("Adresse de ld : %p | Valeur : ", (void*)pld);
    for (int k = sizeof(long double)-1; k >= 0; k--)
        printf("%02x", bytes[k]);
    printf("\n");

    return 0;
}
