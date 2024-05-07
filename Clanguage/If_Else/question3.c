#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    int y;
    printf("Enter a number:");
    scanf("%d", &y);
    int z;
    printf("Enter a number:");
    scanf("%d", &z);
    if (x > y && x > z)
    {
        printf("x is the greatet number");
    }
    if (y > x && y > z)
    {
        printf("y is the greatet number");
    }
    if (z > x && z > y)
    {
        printf("z is the greatet number");
    }
    return 0;
}