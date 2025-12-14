#include <stdio.h>

unsigned long long int factorial(int number);

int main(void)
{

    printf("%d! = %llu\n", 5, factorial(5));
}

unsigned long long int factorial(int number)
{
    if (number <= 1)
    {
        return 1;
    }
    return (number * factorial(number - 1));
}