// 5.a C program to print Triangle Pattern
#include <stdio.h>
int main()
{
    int i, j, k, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*Sample  OUTPUT:
Enter the number of rows: 5
    *
   * *
  * * *
 * * * *
* * * * *
*/
