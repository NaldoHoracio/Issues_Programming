#include <stdio.h>

int main()
{
    double max = 0x10000;
    double min = 0x0000;
    double step = max/10;
    double sum = 0.0;
    int i;

    for(i = 0; i < 11; ++i)
    {
        printf("Brightness: %.2f -- %d%%\n", sum, i*10);
        sum += step;
        printf("\n");
    }

    return 0;
}