#include <stdio.h>
int main()
{
    int n = 1, diff = 2;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j <= ((9 - n) / 2))
            {
                printf(" ");
            }
        }
        for (int j = 1; j <= 9; j++)
        {
            if (j <= n)
            {
                printf("*");
            }
        }
        printf("\n");

        n += diff;
        if (n == 9)
        {
            diff = -2;
        }
    }
}