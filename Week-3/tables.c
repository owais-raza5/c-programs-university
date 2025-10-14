#include<stdio.h>

int main(){
	int table, n;
    n = 0;

    printf("Enter your desired table: ");
    scanf("%d", &table);

    while (n <= 10) {
        printf("%d x %2d = %3d \n", table, n, table*n);
        n += 1;
    }

	return 0;
}