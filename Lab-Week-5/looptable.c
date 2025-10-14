#include <stdio.h>

int main()
{
    int table = 20;
    for (int i = 1; i <= 15; i++)
    {
        printf("%d x %d = %d\n", table, i, table * i);
    }
}