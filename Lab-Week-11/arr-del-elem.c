#include <stdio.h>

int main()
{
    int size, del, curr, next, temp;
    printf("Enter value for size: ");
    scanf("%d", &size);
    int arr[size];
    int newArr[size - 1];

    for (int i = 0; i < size; i++)
    {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter deletion index: ");
    scanf("%d", &del);

    curr = del;
    next = del + 1;

    while (next < size)
    {
        temp = arr[curr];
        arr[curr] = arr[next];
        arr[next] = temp;
        curr++;
        next++;
    }

    for (int i = 0; i < size - 1; i++)
    {
        newArr[i] = arr[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        printf("%d\t", newArr[i]);
    }
}