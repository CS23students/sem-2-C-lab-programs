// 2.a Write a C program to find total and average of 5 students of marks, and also print the same

#include <stdio.h>
int main()
{

    int m1, m2, m3, m4, m5, total;
    printf("\nEnter the marks of the 5 subjects for each student:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d: \n", i + 1);
        scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
        total = m1 + m2 + m3 + m4 + m5;
        printf("Average marks for Student %d = %.2f\n", i + 1, (m1 + m2 + m3 + m4 + m5) / 5.0);
        printf("Total marks for Student %d = %d\n", i + 1, total);
    }

    return 0;
}