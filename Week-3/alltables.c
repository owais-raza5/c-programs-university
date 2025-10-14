#include<stdio.h>

int main(){
	int table, n;
    table = 2;
    n = 0;

    while (table <= 10) {
        while (n <= 10) {
            printf("%d x %2d = %3d \n", table, n, table*n);
            n += 1;
        }
        table += 1;
        n = 0;
        printf("------------- \n");
    }

	return 0;
}