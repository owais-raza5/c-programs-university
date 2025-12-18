#include <stdio.h>

int main() {
    int size = 5;
    int arr[size];

    int *ptr = &arr[0];

    for (int i = 0; i < size; i++)
    {
        printf("Enter value: ");
        scanf("%d", ptr);
        ptr++;
    }

    ptr = &arr[0];
    
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", *ptr);
        ptr++;
    }
}