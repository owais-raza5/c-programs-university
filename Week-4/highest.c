#include <stdio.h>

int main()
{
    int num;
    int max;
    for (int c = 1; c <= 3; c++) {
        printf("Enter any number #%d: ", c);
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }
    printf("Max number is %d", max);
    
}