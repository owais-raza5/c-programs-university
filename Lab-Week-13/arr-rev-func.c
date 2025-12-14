#include <stdio.h>

void reverseArray(int arr[], int size)
{
    int temp, start = 0, end = size - 1;
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

int main()
{
    int size = 5;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, size);
}