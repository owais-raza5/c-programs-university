#include <stdio.h>

int main(void)
{
    int n[5] = {32, 27, 64, 18, 95};

    printf("%s%8s\n", "Element", "Value");

    for (int i = 0; i < 5; ++i)
    {
        printf("%7d%8d\n", i, n[i]);
    }
}