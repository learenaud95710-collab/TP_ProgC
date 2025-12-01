#include <stdio.h>
#include <stdint.h>

int main() {

    /* Variables de base */
    char c;
    short s;
    int i;
    long int li;
    long long int lli;
    float f;
    double d;
    long double ld;

    /* Pointeurs */
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    /* --------------------- SAISIE UTILISATEUR --------------------- */
    printf("===== ENTREE DES VALEURS =====\n");

    unsigned int tmp32;
    unsigned long long tmp64;

    printf("Entrez valeur pour char (hex, ex 12) : ");
    scanf("%x", &tmp32);  c = (char)tmp32;

    printf("Entrez valeur pour short (hex, ex 1234) : ");
    scanf("%hx", &s);

    printf("Entrez valeur pour int (hex, ex 12345678) : ");
    scanf("%x", &i);

    printf("Entrez valeur pour long int (hex, ex 11223344) : ");
    scanf("%lx", &li);

    printf("Entrez valeur pour long long int (hex, ex 1122334455667788) : ");
    scanf("%llx", &lli);

    printf("Entrez valeur float (ex 1.0) : ");
    scanf("%f", &f);

    printf("Entrez valeur double (ex 2.0) : ");
    scanf("%lf", &d);

    printf("Entrez valeur long double (ex 3.0) : ");
    scanf("%Lf", &ld);


    /* --------------------- AFFICHAGE AVANT --------------------- */
    printf("\n===== AVANT MANIPULATION =====\n");

    printf("Adresse de c  : %p | Valeur : %02x\n", (void*)pc,  (unsigned char)c);
    printf("Adresse de s  : %p | Valeur : %04hx\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i  : %p | Valeur : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p | Valeur : %08lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli: %p | Valeur : %016llx\n", (void*)plli, (unsigned long long)lli);

    printf("Adresse de f  : %p | Valeur : %08x\n", (void*)pf, *(uint32_t*)&f);
    printf("Adresse de d  : %p | Valeur : %016llx\n", (void*)pd, *(uint64_t*)&d);

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


    /* --------------------- AFFICHAGE APRES --------------------- */
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
