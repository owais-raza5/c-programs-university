#include <stdio.h>

int main()
{
    int size, min, max;
    printf("Enter value for size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum: %d \n", max);
    printf("Minimum: %d \n", min);
}