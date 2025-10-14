#include <stdio.h>

int main() {
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);
    
    if (x > 0) {
        printf("x is positive");
    } else if (x < 0) {
        printf("x is negative");
    } else {
        printf("x is zero");
    }
}