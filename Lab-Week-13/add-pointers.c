#include <stdio.h>

int main()
{
    int a, b;
    int *aPtr = &a, *bPtr = &b;
    
    printf("Enter a first value: ");
    scanf("%d", &a);
    printf("Enter a second value: ");
    scanf("%d", &b);


    printf("Sum: %d", *aPtr + *bPtr);
}