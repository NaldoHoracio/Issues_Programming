#include <stdio.h>
#include <stdlib.h>

/*
 * Insertion sort
 */
void insertion_sort(int *vec, int size);

/*
 * Ultimo digito de um número
 */
int last_digit(int n);

int main()
{
    int N, D, five_major[5] = {-1,-1,-1,-1,-1};
    printf("Digite N e D:\n");
    scanf("%d %d", &N, &D);

    int i, vec[N];
    printf("Digite os %d numeros:\n", N);
    for(i = 0; i < N; i++) scanf("%d", &vec[i]);
    // Ordenando
    for(i = 0; i < N; i++)
    {
        
    }

    return 0;
}

void insertion_sort(int *vec, int size)
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

int last_digit(int n)
{
    return n % 10;
}