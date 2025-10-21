#include <stdio.h>

int add(int num1, int num2);

int main(void)
{
    printf("%d  ", add(add(2, 3), 7));
}

int add(int num1, int num2)
{
    return num1 + num2;
}