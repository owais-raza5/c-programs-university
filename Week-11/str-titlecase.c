#include <stdio.h>

int main()
{
    char str[] = "i am student of bachelor of computer science";
    int index = 0;

    while (str[index] != '\0')
    {
        str[0] = str[0] - 32;
        if (str[index - 1] == 32)
        {
            str[index] = str[index] - 32;
        }
        printf("%c", str[index]);
        index++;
    }
}