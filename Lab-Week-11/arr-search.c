#include <stdio.h>

int main()
{
    int size, searchValue, flag = 0;
    printf("Enter value for size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter search value: ");
    scanf("%d", &searchValue);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == searchValue)
        {
            printf("Value found at index: %d", i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("Value not found in array");
    }
}