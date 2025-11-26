#include <stdio.h>

int main()
{
    int size = 5, start = 0, end = size - 1, temp;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}