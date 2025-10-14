#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;
    printf("Enter first number: ");
    scanf(" %d", &num1);
    printf("Enter second number: ");
    scanf(" %d", &num2);
    printf("Enter operator(+,-,/,*): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
    {
        printf("Answer is %d", num1 + num2);
        break;
    }
    case '-':
    {
        printf("Answer is %d", num1 - num2);
        break;
    }
    case '/':
    {
        printf("Answer is %d", num1 / num2);
        break;
    }
    case '*':
    {
        printf("Answer is %d", num1 * num2);
        break;
    }
    default:
    {
        printf("Invalid input");
        break;
    }
    }
}