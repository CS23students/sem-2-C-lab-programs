// 15.b Biggest of 2 numbers using conditional operator
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    (num1 > num2) ? printf("%d is the biggest number\n", num1) : printf("%d is the biggest number\n", num2);
    return 0;
}