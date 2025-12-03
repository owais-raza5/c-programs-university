#include <stdio.h>

int calculateFactorial(int num)
{
    int result = 1;
    for (int i = num; i > 1; i--)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Answer: %d", calculateFactorial(num));
}