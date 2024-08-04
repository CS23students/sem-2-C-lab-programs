// 8. Area of square and cube using function
#include <stdio.h>
int area_square(int side);
int area_cube(int side);
int main()
{
    int side;
    printf("Enter the side: ");
    scanf("%d", &side);
    printf("Area of square: %d\n", area_square(side));
    printf("Area of cube: %d\n", area_cube(side));
    return 0;
}

int area_square(int side)
{
    return side * side;
}

int area_cube(int side)
{
    return side * side * side;
}