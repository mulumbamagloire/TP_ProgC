#include <stdio.h>

int main() {

    printf("Taille de char : %s octets\n", sizeof(char));
    printf("Taille de signed char : %s octets\n", sizeof(signed char));
    printf("Taille de unsigned char : %s octets\n\n", sizeof(unsigned char));

    printf("Taille de short : %s octets\n", sizeof(short));
    printf("Taille de unsigned short : %s octets\n\n", sizeof(unsigned short));

    printf("Taille de int : %s octets\n", sizeof(int));
    printf("Taille de unsigned int : %s octets\n\n", sizeof(unsigned int));

    printf("Taille de long int : %s octets\n", sizeof(long int));
    printf("Taille de unsigned long int : %s octets\n\n", sizeof(unsigned long int));

    printf("Taille de long long int : %s octets\n", sizeof(long long int));
    printf("Taille de unsigned long long int : %s octets\n\n", sizeof(unsigned long long int));

    printf("Taille de float : %s octets\n", sizeof(float));
    printf("Taille de double : %s octets\n", sizeof(double));
    printf("Taille de long double : %s octets\n", sizeof(long double));

}
