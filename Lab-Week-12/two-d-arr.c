#include <stdio.h>

int main()
{
    int row = 2, col = 2;
    int twoDimensionalArray[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value for [%d][%d]: ", i, j);
            scanf("%d", &twoDimensionalArray[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", twoDimensionalArray[i][j]);
        }
        printf("\n");
    }
}