#include<stdio.h>

int main(){
	int grade = 69;

    printf("Enter your grade: ");
    scanf("%d", &grade);

	puts((grade > 50) ? "Passed!" : "Failed!");

	return 0;
}