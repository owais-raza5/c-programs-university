#include <stdio.h>

int main()
{
    int size;
    printf("Enter value for size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < size; j++)
    {
        printf("%d\t", arr[j]);
    }
}