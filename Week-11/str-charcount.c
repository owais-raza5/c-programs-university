#include <stdio.h>

int main()
{
    char str[] = "i am student of bachelor of computer science";
    int index = 0, count = 0;

    while (str[index] != '\0')
    {
        index++;
        count++;
    }
    printf("%d", count);
}