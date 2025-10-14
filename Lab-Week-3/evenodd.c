#include <stdio.h>

int main() {
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);
    
    if (x % 2 == 0) {
        printf("x is even");
    } else {
        printf("x is odd");
    }
}