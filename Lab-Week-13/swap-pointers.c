#include <stdio.h>

int main()
{
    int a, b;
    int *aPtr = &a, *bPtr = &b;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    int temp = *aPtr;
    *aPtr = *bPtr;
    *bPtr = temp;

    printf("First value: %d\n", *aPtr);
    printf("Second value: %d\n", *bPtr);

    return 0;
}
