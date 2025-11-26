#include <stdio.h>

int main()
{
    char name[] = "owais";
    int index = 0;

    while (name[index] != '\0')
    {
        printf("%c\n", name[index++]);
    }
}