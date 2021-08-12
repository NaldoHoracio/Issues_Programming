#include <stdio.h>

int main()
{
    int n, num, k = 0;
    scanf("%d", &n);
    do
    {
        for (int i = 0; i < 1000; i++)
        {
            scanf("%d", &num);
            (num == n) ? k++ : k;
        }
        printf("%d appeared %d times\n", n, k);
        k = 0;
        scanf("%d", &n);
    } while (n!=-1);
    
    return 0;
}