#include <stdio.h>

int main() {

    // --- char ---
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 250;

    // --- short ---
    short s = -123;
    signed short ss = -32000;
    unsigned short us = 65000;

    // --- int ---
    int i = 12345;
    signed int si = -12345;
    unsigned int ui = 4000000000U;

    // --- long int ---
    long int li = 123456789L;
    signed long int sli = -123456789L;
    unsigned long int uli = 3000000000UL;

    // --- long long int ---
    long long int lli = 9876543210LL;
    signed long long int slli = -9876543210LL;
    unsigned long long int ulli = 18446744073709551615ULL;

    // --- float ---
    float f = 3.14f;

    // --- double ---
    double d = 2.718281828;

    // --- long double ---
    long double ld = 1.234567890123456L;


    // --- Affichage ---
    printf("char                 : %c\n", c);
    printf("signed char          : %d\n", sc);
    printf("unsigned char        : %u\n\n", uc);

    printf("short                : %d\n", s);
    printf("signed short         : %d\n", ss);
    printf("unsigned short       : %u\n\n", us);

    printf("int                  : %d\n", i);
    printf("signed int           : %d\n", si);
    printf("unsigned int         : %u\n\n", ui);

    printf("long int             : %ld\n", li);
    printf("signed long int      : %ld\n", sli);
    printf("unsigned long int    : %lu\n\n", uli);

    printf("long long int        : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n\n", ulli);

    printf("float                : %f\n", f);
    printf("double               : %lf\n", d);
    printf("long double          : %Lf\n", ld);

    return 0;
}
