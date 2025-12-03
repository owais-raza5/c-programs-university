#include <stdio.h>

int calculatePow(int num, int pow)
{
    int result = 1;
    for (int i = 1; i <= pow; i++)
    {
        result *= num;
    }

    return result;
}

int main()
{
    int num, pow;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter power of that num: ");
    scanf("%d", &pow);

    printf("Answer: %d", calculatePow(num, pow));
}