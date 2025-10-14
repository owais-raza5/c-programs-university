#include <stdio.h>

int main()
{
    int start = 1;
    int end = 5;

    while (start <= 20)
    {
        for (int j = 1; j <= 10; j++)
        {
            for (int i = start; i <= end; i++)
            {
                printf("%2d x %2d = %3d\t", i, j, i * j);
            }
            printf("\n");
        }
        printf("\n");
        start += 5;
        end += 5;
    }
}