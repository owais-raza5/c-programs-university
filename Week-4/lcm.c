#include <stdio.h>

int main()
{
    int num;
    int div = 2;
    printf("Enter number: ");
    scanf("%d", &num);
    while (num != 1) {
        if (num % div == 0) {
            num /= div;
            printf("%d ", div);
        } else {
            div++;
        }
    }
    
}