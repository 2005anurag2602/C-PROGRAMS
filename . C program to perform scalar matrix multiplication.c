
#include <stdio.h>
int main()
{
    int matrix[ROWS][COLUMNS];
    int scalar;
    int i, j;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Enter the scalar value: ");
    scanf("%d", &scalar);

    printf("The original matrix is:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("The multiplied matrix is:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            matrix[i][j] *= scalar;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
