#include <stdio.h>

int main() {

    printf("Taille des types en C (en octets) :\n\n");

    // char
    printf("char               : %zu octet(s)\n", sizeof(char));
    printf("signed char        : %zu octet(s)\n", sizeof(signed char));
    printf("unsigned char      : %zu octet(s)\n\n", sizeof(unsigned char));

    // short
    printf("short              : %zu octet(s)\n", sizeof(short));
    printf("signed short       : %zu octet(s)\n", sizeof(signed short));
    printf("unsigned short     : %zu octet(s)\n\n", sizeof(unsigned short));

    // int
    printf("int                : %zu octet(s)\n", sizeof(int));
    printf("signed int         : %zu octet(s)\n", sizeof(signed int));
    printf("unsigned int       : %zu octet(s)\n\n", sizeof(unsigned int));

    // long int
    printf("long int           : %zu octet(s)\n", sizeof(long int));
    printf("signed long int    : %zu octet(s)\n", sizeof(signed long int));
    printf("unsigned long int  : %zu octet(s)\n\n", sizeof(unsigned long int));

    // long long int
    printf("long long int          : %zu octet(s)\n", sizeof(long long int));
    printf("signed long long int   : %zu octet(s)\n", sizeof(signed long long int));
    printf("unsigned long long int : %zu octet(s)\n\n", sizeof(unsigned long long int));

    // float
    printf("float              : %zu octet(s)\n\n", sizeof(float));

    // double
    printf("double             : %zu octet(s)\n\n", sizeof(double));

    // long double
    printf("long double        : %zu octet(s)\n\n", sizeof(long double));

    return 0;
}
