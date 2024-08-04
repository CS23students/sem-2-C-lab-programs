// 1.a Roots of  Quadratic Equation

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, D, x1, x2;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    D = sqrt(b * b - 4 * a * c);
    if (D > 0)
    {
        x1 = (-b + D) / (2 * a);
        x2 = (-b - D) / (2 * a);
        printf("The roots are real and distinct.\n");
        printf("x1 = %d\n", x1);
        printf("x2 = %d\n", x2);
    }
    else if (D == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("The roots are real and equal.\n");
        printf("x1 = x2 = %d\n", x1);
    }
    else
    {
        printf("The roots are complex.\n");
        printf("x1 = %d + %d i\n", -b / (2 * a), sqrt(-D) / (2 * a));
        printf("x2 = %d - %d i\n", -b / (2 * a), sqrt(-D) / (2 * a));
    }
    return 0;
}
