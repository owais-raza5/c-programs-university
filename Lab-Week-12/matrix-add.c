#include <stdio.h>

int main()
{
    int row = 2, col = 2;
    int matrixOne[row][col], matrixTwo[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value for [%d][%d] in matrix 1: ", i, j);
            scanf("%d", &matrixOne[i][j]);
            printf("Enter value for [%d][%d] in matrix 2: ", i, j);
            scanf("%d", &matrixTwo[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%2d ", matrixOne[i][j] + matrixTwo[i][j]);
        }
        printf("\n");
    }
}