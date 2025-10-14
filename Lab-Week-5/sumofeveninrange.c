#include <stdio.h>

int main()
{
    int a, b, oddCounter = 0, evenCounter = 0, negativeCounter = 0;
    printf("Enter first value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            evenCounter += 1;
        }
        else
        {
            oddCounter += 1;
        }
        if (i < 0)
        {
            negativeCounter += 1;
        }
    }
    printf("Even numbers: %d \n", evenCounter);
    printf("Odd numbers: %d \n", oddCounter);
    printf("Negative numbers: %d \n", negativeCounter);
}