#include <stdio.h>
int main()
{
    for (int j = 1; j <= 10; j++)
    {
        for (int k = 10; k >= j; k--) {
            printf(" ");
        }
        for (int i = 0; i <= (j - 1); i++)
        {
            printf("*");
        }
        printf("\n");
    }
}