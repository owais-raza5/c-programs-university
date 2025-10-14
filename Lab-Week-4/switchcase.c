#include <stdio.h>

int main()
{
    char grade;
    printf("Enter your Grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
    {
        printf("Very Good");
        break;
    }
    case 'B':
    {
        printf("Good");
        break;
    }
    case 'C':
    {
        printf("Average");
        break;
    }
    case 'F':
    {
        printf("Fail");
        break;
    }
    default:
    {
        printf("Invalid input");
        break;
    }
    }
}