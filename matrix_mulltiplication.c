#include <stdio.h>

int main()
{
    int row1, row2, col1, col2;
    printf("Enter number of row1 and col1 of first maxtix\n");
    scanf("%d%d", &row1, &col1);
    printf("Enter number of row2 and col2 of second maxtix\n");
    scanf("%d%d", &row2, &col2);
    if (col1 != row2)
    {
        printf("Multiplication of matrixrix not be calculated .There should be column1 and row2 equal");
    }
    else
    {
        int matrix1[row1][col1], matrix2[row2][col2], resultmatrix[row1][col2];
        printf("Enter element of first matrixrix\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("matrix[%d][%d]= ", i, j);
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("Enter element of Second matrixrix\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("matrix[%d][%d]= ", i, j);
                scanf("%d", &matrix2[i][j]);
            }
        }
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                resultmatrix[i][j] = 0;
            }
        }
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < row2; k++)
                {
                    resultmatrix[i][j] = resultmatrix[i][j] + matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf(" %d ", resultmatrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}