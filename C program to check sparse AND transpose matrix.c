
#include <stdio.h>
int main()
{
  int rows, cols, i, j;
  int matrix[100][100];
  printf("Enter number of rows: ");
  scanf("%d", &rows);
  printf("Enter number of columns: ");
  scanf("%d", &cols);
  printf("Enter elements of the matrix:\n");
  for (i = 0; i < rows; ++i)
  {
    for (j = 0; j < cols; ++j)
    {
      scanf("%d", &matrix[i][j]);
    }
  }
  // Check if matrix is sparse
  int count = 0;
  for (i = 0; i < rows; ++i)
  {
    for (j = 0; j < cols; ++j)
    {
      if (matrix[i][j] == 0)
        ++count;
    }
  }
  if (count > (rows * cols) / 2)
    printf("Matrix is sparse\n");
  else
    printf("Matrix is not sparse\n");
  // Find transpose of matrix
  printf("Transpose of the matrix:\n");
  for (i = 0; i < rows; ++i)
  {
    for (j = 0; j < cols; ++j)
    {
      printf("%d ", matrix[j][i]);
    }
    printf("\n");
  }
  return 0;
}
