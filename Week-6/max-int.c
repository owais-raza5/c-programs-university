#include <stdio.h>

int maximum(int x, int y);

int main(void)
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int number4 = 0;

    printf("Enter first integer: ");
    scanf("%d", &number1);
    printf("Enter second integer: ");
    scanf("%d", &number2);
    printf("Enter third integer: ");
    scanf("%d", &number3);
    printf("Enter fourth integer: ");
    scanf("%d", &number4);

    printf("Maximum is: %d\n", maximum(maximum(number1, number2), maximum(number3, number4)));
}

int maximum(int x, int y)
{
    int max = x;

    if (y > max)
    {
        max = y;
    }

    return max;
}