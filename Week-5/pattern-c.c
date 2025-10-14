#include <stdio.h>
int main()
{
    for (int j = 1; j <= 10; j++)
    {
        for (int k = 0; k <= (j - 1); k++) {
            printf(" ");
        }
        for (int i = 10; i >= j; i--)
        {
            printf("*");
        }
        printf("\n");
    }
}