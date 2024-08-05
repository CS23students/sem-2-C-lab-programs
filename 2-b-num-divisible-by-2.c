// 2.b Write a C program to generate numbers between 20 and 100 which are divisible by 2 and not divisible by 3 and 5.

#include <stdio.h>
int main()
{
    int i;
    for (i = 20; i < 100; i++)
    {

        if ((i % 2 == 0) && (i % 3 != 0) && (i % 5 != 0))
        {
            printf("\n The number divisible by 2 and not divisible by 3 and 5: %d", i);
        }
    }

    return 0;
}

/* OUTPUT
 The number divisible by 2 and not divisible by 3 and 5: 22
 The number divisible by 2 and not divisible by 3 and 5: 26
 The number divisible by 2 and not divisible by 3 and 5: 28
 The number divisible by 2 and not divisible by 3 and 5: 32
 The number divisible by 2 and not divisible by 3 and 5: 34
 The number divisible by 2 and not divisible by 3 and 5: 38
 The number divisible by 2 and not divisible by 3 and 5: 44
 The number divisible by 2 and not divisible by 3 and 5: 46
 The number divisible by 2 and not divisible by 3 and 5: 52
 The number divisible by 2 and not divisible by 3 and 5: 56
 The number divisible by 2 and not divisible by 3 and 5: 58
 The number divisible by 2 and not divisible by 3 and 5: 62
 The number divisible by 2 and not divisible by 3 and 5: 64
 The number divisible by 2 and not divisible by 3 and 5: 68
 The number divisible by 2 and not divisible by 3 and 5: 74
 The number divisible by 2 and not divisible by 3 and 5: 76
 The number divisible by 2 and not divisible by 3 and 5: 82
 The number divisible by 2 and not divisible by 3 and 5: 86
 The number divisible by 2 and not divisible by 3 and 5: 88
 The number divisible by 2 and not divisible by 3 and 5: 92
 The number divisible by 2 and not divisible by 3 and 5: 94
 The number divisible by 2 and not divisible by 3 and 5: 98
 */
