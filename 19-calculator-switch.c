// 19. Calculator performing all operations using switch case
#include <stdio.h>
#include <math.h>

int main()
{
    int op;
    int a, b;
    printf("Enter operation to perform:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Square root\n6. Power\n7. sin\n8.cos\n9.tan\n10. log\n11. exit\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Sum: %d\n", a + b);
        break;
    case 2:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Difference: %d\n", a - b);
        break;
    case 3:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Product: %d\n", a * b);
        break;
    case 4:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Quotient: %d\n", a / b);
        break;
    case 5:
        printf("Enter a number: ");
        scanf("%d", &a);
        printf("Square root: %f\n", sqrt(a));
        break;
    case 6:
        printf("Enter base and power: ");
        scanf("%d %d", &a, &b);
        printf("Result: %f\n", pow(a, b));
        break;
    case 7:
        printf("Enter a number: ");
        scanf("%d", &a);
        printf("sin(%d): %f\n", a, sin(a));
        break;
    case 8:
        printf("Enter a number: ");
        scanf("%d", &a);
        printf("cos(%d): %f\n", a, cos(a));
        break;
    case 9:
        printf("Enter a number: ");
        scanf("%d", &a);
        printf("tan(%d): %f\n", a, tan(a));
        break;
    case 10:
        printf("Enter a number: ");
        scanf("%d", &a);
        printf("log(%d): %f\n", a, log(a));
        break;
    case 11:
        printf("Exiting...\n");
        break;
    default:
        printf("Invalid operation\n");
        break;
    }
    return 0;
}