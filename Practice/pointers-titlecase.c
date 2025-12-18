#include <stdio.h>

void convertToTitleCase(char *strPtr)
{
    *strPtr = *strPtr - 32;
    while (*strPtr != '\0')
    {
        if (*strPtr == 32) {
            strPtr++;
            *strPtr = *strPtr - 32;
        }
        strPtr++;
    }
}

int main()
{
    char string[] = "this is an example string";

    printf("Before:\n %s\n", string);
    convertToTitleCase(string);
    printf("After:\n %s\n", string);
}