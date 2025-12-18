#include <stdio.h>

char *checkPalindrome(char *strPtr, int length)
{
    int start = 0;
    int end = length - 2;

    while (start < end)
    {
        if (*(strPtr + start) != *(strPtr + end))
        {
            return "not a palindrome";
        }
        start++;
        end--;
    }
    return "a palindrome";
}

int main()
{
    char testStr1[] = "racecar";
    char testStr2[] = "mom";
    char testStr3[] = "cake";

    printf("%s is %s\n", testStr1, checkPalindrome(testStr1, sizeof(testStr1) / sizeof(testStr1[0])));
    printf("%s is %s\n", testStr2, checkPalindrome(testStr2, sizeof(testStr2) / sizeof(testStr2[0])));
    printf("%s is %s\n", testStr3, checkPalindrome(testStr3, sizeof(testStr3) / sizeof(testStr3[0])));
}
