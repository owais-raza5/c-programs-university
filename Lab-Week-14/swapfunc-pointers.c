#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    int *aPtr = &a, *bPtr = &b;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    printf("Before: %d, %d\n", a, b);
    swap(aPtr, bPtr);
    printf("After: %d, %d\n", a, b);
}