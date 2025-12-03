#include <stdio.h>

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main()
{

    printf("Sum of first 50 values: %d \n", sum(50));
}