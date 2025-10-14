#include<stdio.h>

int main(){
    int table, n;
    table=2;
    
    while (table <= 10)
    {
        n=1;
        while (n <= 12 )
        {
            printf("%d x %2d = %3d\n", table, n, table*n);
            n = n + 1;
        }
        table = table + 1;
        puts("");
    }
    

}