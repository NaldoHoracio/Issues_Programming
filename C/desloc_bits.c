#include <stdio.h>

void print()
{
    printf("To vivo!\n");
}

int main ()
{
    long int n = 31;
    long unsigned char a = 0x00f0;
    long int b = 0x00Ff;
    long int half_n;

    half_n = (n << 1) + 1;

    printf("N: %d\n", n);
    printf("Half N: %d\n", half_n);
    printf("A: %d\n", a);
    printf("A X 2: %d\n", a << 1);
    printf("B: %d\n", b);

    return 0;
}