// 6.a Fibonacci Series upto n terms
#include <stdio.h>
int main()
{
    int f1, f2, f3, n, i;
    f1 = 0;
    f2 = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printf("\n%d\n%d ", f1, f2);
    for (i = 2; i <= n; i++)
    {
        f3 = f1 + f2;
        printf("\n%d ", f3);
        f1 = f2;
        f2 = f3;
    }
    return 0;
}