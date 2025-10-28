#include <stdio.h>

int main()
{
    int a, b, permission;

    
    do
    {
        printf("Enter num 1: ");
        scanf("%d", &a);
        printf("Enter num 2: ");
        scanf("%d", &b);
        a /= b;
        printf("Value: %d \n", a);
        printf("Do you want to continue ? press 1 for yes, 0 for No: ");
        scanf("%d", &permission);
    } while (permission);
}