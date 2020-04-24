#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Insertion sort na ordem crescente
 */
void insertion_sort_cres(int *vec, int size);

/*
 * Insertion sort na ordem decrescente
 */
void insertion_sort_dec(int *vec, int size);

/*
 * Ultimo digito de um número
 */
int last_digit(int n);

int main()
{
    int N, D, five_major[5] = {-1,-1,-1,-1,-1};
    //printf("Digite N e D:\n");
    scanf("%d %d", &N, &D);

    int i, vec[N];
    //printf("Digite os %d numeros:\n", N);
    for(i = 0; i < N; i++) scanf("%d", &vec[i]);
    
    // Ordenando na forma descendente
    insertion_sort_dec(vec, N);
    int last_d, i_five_major = 0;
    
    //Verificar se tem o último dígito
    for(i = 0; i < N; ++i)
    {
        last_d = last_digit(vec[i]);

        if(last_d == D && i_five_major <= 4)
        {
            five_major[i_five_major] = vec[i];
            i_five_major++;
        }else{i_five_major = i_five_major;}
    }
    // Ordenando os 5 maiores
    insertion_sort_cres(five_major, 5);
    // Imprimindo os 5 maiores cujo último digito é igual a D
    for(i = 0; i < 5; ++i)
    {
        //printf("%d -- %d\n", i, five_major[i]);
        printf("%d\n", five_major[i]);
    }

    return 0;
}

void insertion_sort_cres(int *vec, int size)
{
    int i, j, key;
    for(i = 0; i < size; ++i)
    {
        key = vec[i];
        j = i - 1;
        while(j >= 0 && vec[j] > key)
        {
            vec[j + 1] = vec[j];
            j = j - 1;

        }
        vec[j + 1] = key;
    }
}

void insertion_sort_dec(int *vec, int size)
{
    int i, j, key;
    for(i = 0; i < size; ++i)
    {
        key = vec[i];
        j = i - 1;
        while(j >= 0 && vec[j] < key)
        {
            vec[j + 1] = vec[j];
            j = j - 1;

        }
        vec[j + 1] = key;
    }
}

int last_digit(int n)
{
    return fabs(n % 10);
}