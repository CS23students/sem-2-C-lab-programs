// 13. Matrix Multiplication
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10], i, j, k, r1, c1, r2, c2;
    printf("Enter the no.of rows and columns of mat 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the no.of rows and columns of mat 2: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible\n");
    }

    printf("Enter the elements of matrix 1: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of matrix 2: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The resultant matrix is: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}