#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    float matrix[n][n], trace_matrix = 0.0, vec_trace[n];

    for(i = 0; i < n; ++i)
    {
        for(j =  0; j < n; ++j)
        {
            scanf("%f", &matrix[i][j]);
            if(i == j){
                trace_matrix += matrix[i][j];
                vec_trace[i] = matrix[i][j];
            }
        }
    }
    printf("tr(A) = ");
    for(i = 0; i < n; ++i)
    {
        if(i != n-1)
        {
            printf("(%.2f)", vec_trace[i]);
            printf(" + ");
        }else{
            printf("(%.2f) = %.2f", vec_trace[i], trace_matrix);
        }
    }
    return 0;
}