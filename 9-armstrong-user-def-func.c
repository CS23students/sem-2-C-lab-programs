// 9. Armstrong number using user-defined function
#include <stdio.h>
#include <math.h>
int check_armstrong(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (check_armstrong(num))
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}

// Function to check if a number is Armstrong or not
int check_armstrong(int num)
{
    int originalNum, remainder, result = 0, n = 0;
    originalNum = num;

    // store the number of digits of num in n
    for (originalNum = num; originalNum != 0; ++n)
    {
        originalNum /= 10;
    }

    for (originalNum = num; originalNum != 0; originalNum /= 10)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }

    // Return 1 if the number is an Armstrong number, 0 otherwise
    return (result == num);
}
