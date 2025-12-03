#include <stdio.h>

int swapValues(int a, int b) {
    a = b;
    return a;
}

int main() {
    int num1, num2, temp;

    printf("Enter value for first number: ");
    scanf("%d", &num1);
    printf("Enter value for second number: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = swapValues(num1, num2);
    num2 = temp;

    printf("First number: %d \n", num1);
    printf("Second number: %d", num2);
}