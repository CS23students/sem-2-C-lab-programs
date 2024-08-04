// 1.b Area and Circumference of circle

#include <stdio.h>
int main()
{
    int r, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;
    printf("The area of the circle is: %d\n", area);
    printf("The circumference of the circle is: %d\n", circumference);
    return 0;
}