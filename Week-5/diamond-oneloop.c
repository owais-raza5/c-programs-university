#include <stdio.h>
int main()
{
    int n = 1, diff = 2, pattern;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            pattern = (9 - n) / 2;
            if (j <= pattern)
            {
                printf(" ");
            }
            else if (j - pattern <= n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
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