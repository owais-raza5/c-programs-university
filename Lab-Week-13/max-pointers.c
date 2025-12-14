#include <stdio.h>

int main()
{
    int a, b, c;
    int *aPtr = &a, *bPtr = &b, *cPtr = &c;

    printf("Enter a first value: ");
    scanf("%d", &a);
    printf("Enter a second value: ");
    scanf("%d", &b);
    printf("Enter a third value: ");
    scanf("%d", &c);

    if (*aPtr >= *bPtr && *aPtr >= *cPtr)
    {
        printf("Max: %d", *aPtr);
    }
    if (*bPtr >= *aPtr && *bPtr >= *cPtr)
    {
        printf("Max: %d", *bPtr);
    }
    if (*cPtr >= *bPtr && *cPtr >= *aPtr)
    {
        printf("Max: %d", *cPtr);
    }
}