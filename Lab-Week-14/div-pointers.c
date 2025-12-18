#include <stdio.h>

int main()
{
    int a, b;
    int *aPtr = &a, *bPtr = &b;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    printf("%d / %d = %d", *aPtr, *bPtr, (*aPtr)/(*bPtr));

    return 0;
}
