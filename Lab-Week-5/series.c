#include <stdio.h>

int main()
{
    for (int i = 5; i <= 13; i += 2)
    {
        printf("%d ", i);
    }
    puts("");
    for (int j = 71; j >= 47; j -= 6)
    {
        printf("%d ", j);
    }
    puts("");
    for (int k = 1; k <= 2187; k *= 3)
    {
        printf("%d ", k);
    }
}