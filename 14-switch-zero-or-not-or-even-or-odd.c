// 14 Using switch statement whether a number is zero or not or even or odd
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num != 0)
    {
    case 0:
        // The number is zero
        printf("The number is zero\n");
        break;
    default:
        // The number is not zero, check if it's even or odd
        switch (num % 2)
        {
        case 0:
            printf("%d is not zero and it is an even number\n", num);
            break;
        case 1:
            printf("%d is not zero and it is an odd number\n", num);
            break;
        }
        break;
    }

    return 0;
}

/*Sample OUTPUT:
Enter a number: 0
The number is zero

Enter a number: 5
5 is not zero and it is an odd number

Enter a number: 10
10 is not zero and it is an even number

*/