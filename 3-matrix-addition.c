// 3.a C program for matrix addition  m-row and n-col
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, m, n;
    printf("Enter rows and cols: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of mat1: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of mat2: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Sum of matrices: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}