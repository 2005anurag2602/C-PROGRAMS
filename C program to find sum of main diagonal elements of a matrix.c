
#include <stdio.h>
int main()
{
  int rows, cols, i, j;
  int matrix[100][100];
  int sum = 0;
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
  for (i = 0; i < rows; ++i)
  {
    for (j = 0; j < cols; ++j)
    {
      if (i == j)
        sum += matrix[i][j];
    }
  }
  printf("Sum of main diagonal elements = %d", sum);
  return 0;
}
