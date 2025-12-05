#include <stdio.h>

void swapValues(int a, int b)
{
    printf("Before swap, num1: %d, num2: %d \n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swap, num1: %d, num2: %d \n", a, b);
}

int main()
{
    int num1, num2;

    printf("Enter value for first number: ");
    scanf("%d", &num1);
    printf("Enter value for second number: ");
    scanf("%d", &num2);

    swapValues(num1, num2);
}