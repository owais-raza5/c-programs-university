#include <stdio.h>

int main() {
    int percentage;
    printf("Enter percentage: ");
    scanf("%d", &percentage);
    
    if (percentage >= 96 && percentage <= 100) {
        printf("Grade: A+");
    } else if (percentage >= 86 && percentage <= 95) {
        printf("Grade: A");
    } else if (percentage >= 76 && percentage <= 85) {
        printf("Grade: B+");
    } else if (percentage >= 66 && percentage <= 75) {
        printf("Grade: B");
    } else if (percentage >= 56 && percentage <= 65) {
        printf("Grade: C+");
    } else if (percentage < 55) {
        printf("Fail");
    } else {
        printf("Invalid input");
    }
}