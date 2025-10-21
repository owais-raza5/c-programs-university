#include <stdio.h>

int main()
{
    int s = 1, a = 0, b = 1, c = 1;
    while (s <= 15)
    {
        printf("%d ", a);
        a = b;
        b = c;
        c = a + b;

        s++;
    }
}