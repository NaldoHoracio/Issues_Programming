#include <stdio.h>


int main()
{
    #ifdef EULER
        printf("Cte. de EULER: 2.718!\n");
    #else
        printf("Cte. de EULER não definida!\n");
    #endif
        printf("Aqui executa sempre!\n");
    return 0;
}