#include <stdio.h>

int main() {
    char c = 'A';
    signed char sc = -100;
    unsigned char uc = 200;

    short s = -30000;
    unsigned short us = 60000;

    int i = -1000000;
    unsigned int ui = 3000000;

    long int li = -5000000;
    unsigned long int uli = 10000000;

    long long int lli = -9000000000;
    unsigned long long int ulli = 18000000000;

    float f = 3.14f;
    double d = 3.141592;
    long double ld = 3.14159265359L;

    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    printf("short : %d\n", s);
    printf("unsigned short : %u\n\n", us);

    printf("int : %d\n", i);
    printf("unsigned int : %u\n\n", ui);

    printf("long int : %ld\n", li);
    printf("unsigned long int : %lu\n\n", uli);

    printf("long long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n\n", ulli);

    printf("float : %.2f\n", f);
    printf("double : %.6f\n", d);
    printf("long double : %.10Lf\n", ld);

}
