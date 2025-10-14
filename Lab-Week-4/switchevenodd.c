#include <stdio.h>

int main()
{
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);
    x = x % 2;
    

    switch (x)
    {
    case 0:
    {
        printf("x is even");
        break;
    }
    case 1:
    {
        printf("x is odd");
        break;
    }
    default:
    {
        printf("Invalid input");
        break;
    }
    }
}