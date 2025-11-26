#include <stdio.h>

int main()
{
    int size, sum, product = 1;
    printf("Enter value for size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
        product *= arr[i];
    }
    printf("Sum: %d \n", sum);
    printf("Product: %d \n", product);
}