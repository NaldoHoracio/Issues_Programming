#include <stdio.h>
#include <stdbool.h>

#define MAXSIZE 1000

int main()
{
    int i, n, equal = 0, cont = 0;
    int vector[MAXSIZE];
    bool aux = true;

    for (;aux;cont++)
    {
        //printf("Digite os 5 numeros:\n");
        for(i = 0; i < MAXSIZE; ++i) scanf("%d", &vector[i]);
        
        if(vector[0] == -1 && cont > 0)
        {
            aux = false;
            break;
        }
        
        //printf("Digite N:\n");
        
        scanf("%d", &n);

        for(i = 0; i < MAXSIZE; ++i) if(vector[i] == n) equal++;

        printf("%d appeared %d times\n", n, equal);
        equal = 0;
    }
    

    return 0;
}