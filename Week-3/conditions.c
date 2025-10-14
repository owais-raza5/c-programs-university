#include<stdio.h>

int main(){
	int grade = 69;

    printf("Enter your grade: ");
    scanf("%d", &grade);

	if (grade > 50) {
		puts("Passed!");
	} else {
		puts("Failed!");
	}

	return 0;
}