#include <stdio.h>

int main()
{
    int row = 3, col = 2;
    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value for [%d][%d] in matrix 1: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%2d ", matrix[j][i]);
        }
        printf("\n");
    }
}