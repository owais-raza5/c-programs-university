#include <stdio.h>

int main()
{
    int n = 1, diff = 2, pattern, alpha = 0, alphaCount = 1, flag = 0;
    for (int i = 1; i <= 25; i++)
    {
        for (int j = 1; j <= 25; j++)
        {
            pattern = (25 - n) / 2;

            if (j <= pattern)
            {
                printf("   ");
            }
            else if (j - pattern <= n)
            {
                if (alpha == n)
                {
                    alphaCount = -1;
                }

                alpha += alphaCount;
                printf(" %c ", alpha + 64);
                if (flag)
                {
                    alphaCount = 1;
                    flag = 0;
                }
            }
        }
        printf("\n");
        n += diff;
        if (n == 25)
        {
            diff = -2;
        }

        alphaCount = 1;
        if (alpha == (n / 2) + 2)
        {
            alphaCount = -1;
            flag = 1;
        }
    }
}