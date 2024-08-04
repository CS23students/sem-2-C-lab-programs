// 2.b Write a C program to generate numbers between 20 and 100 which are divisible by 2 and not divisible by 3 and 5.

#include <stdio.h>
int main()
{
    int i;
    for (i = 20; i < 100; i++)
    {

        if (i % 2 == 0)
        {
            printf("\n The number divisible by 2: %d", i);
        }
        else if ((i % 3 != 0) && (i % 5 != 0))
        {
            printf("\n The number not divisible by 3 and 5: %d", i);
        }
    }

    return 0;
}

/* OUTPUT
The number divisible by 2: 20
 The number divisible by 2: 22
 The number not divisible by 3 and 5: 23
 The number divisible by 2: 24
 The number divisible by 2: 26
 The number divisible by 2: 28
 The number not divisible by 3 and 5: 29
 The number divisible by 2: 30
 The number not divisible by 3 and 5: 31
 The number divisible by 2: 32
 The number divisible by 2: 34
 The number divisible by 2: 36
 The number not divisible by 3 and 5: 37
 The number divisible by 2: 38
 The number divisible by 2: 40
 The number not divisible by 3 and 5: 41
 The number divisible by 2: 42
 The number not divisible by 3 and 5: 43
 The number divisible by 2: 44
 The number divisible by 2: 46
 The number not divisible by 3 and 5: 47
 The number divisible by 2: 48
 The number not divisible by 3 and 5: 49
 The number divisible by 2: 50
 The number divisible by 2: 52
 The number not divisible by 3 and 5: 53
 The number divisible by 2: 54
 The number divisible by 2: 56
 The number divisible by 2: 58
 The number not divisible by 3 and 5: 59
 The number divisible by 2: 60
 The number not divisible by 3 and 5: 61
 The number divisible by 2: 62
 The number divisible by 2: 64
 The number divisible by 2: 66
 The number not divisible by 3 and 5: 67
 The number divisible by 2: 68
 The number divisible by 2: 70
 The number not divisible by 3 and 5: 71
 The number divisible by 2: 72
 The number not divisible by 3 and 5: 73
 The number divisible by 2: 74
 The number divisible by 2: 76
 The number not divisible by 3 and 5: 77
 The number divisible by 2: 78
 The number not divisible by 3 and 5: 79
 The number divisible by 2: 80
 The number divisible by 2: 82
 The number not divisible by 3 and 5: 83
 The number divisible by 2: 84
 The number divisible by 2: 86
 The number divisible by 2: 88
 The number not divisible by 3 and 5: 89
 The number divisible by 2: 90
 The number not divisible by 3 and 5: 91
 The number divisible by 2: 92
 The number divisible by 2: 94
 The number divisible by 2: 96
 The number not divisible by 3 and 5: 97
 The number divisible by 2: 98
 */