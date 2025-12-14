#include <stdio.h>

int main() {
    int a = 5;
    int *aPtr = &a;

    printf("Address of pointer: %d \n", aPtr);
    printf("Value of pointer: %d \n", *aPtr);
}