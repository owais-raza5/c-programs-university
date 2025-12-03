#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void printSum(int result)
{
    printf("Sum: %d", result);
}

int main()
{
    int num1, num2;
    printf("Enter first value: ");
    scanf("%d", &num1);
    printf("Enter second value: ");
    scanf("%d", &num2);

    printSum(sum(num1, num2));
}