
#include <stdio.h>
int main()
{
  int n, i, sum;
  // Print all Perfect numbers between 1 to n
  printf("Enter the upper limit: ");
  scanf("%d", &n);
  printf("Perfect numbers between 1 and %d are: ", n);
  for (i = 1; i <= n; ++i)
  {
    sum = 0;
    for (int j = 1; j < i; ++j)
    {
      if (i % j == 0)
        sum += j;
    }
    if (sum == i)
      printf("%d ", i);
  }
  // Check if a given number is a Perfect number or not
  int num;
  printf("\nEnter a number to check if it is a Perfect number: ");
  scanf("%d", &num);
  sum = 0;
  for (i = 1; i < num; ++i)
  {
    if (num % i == 0)
      sum += i;
  }
  if (sum == num)
    printf("%d is a Perfect number.", num);
  else
    printf("%d is not a Perfect number.", num);
  return 0;
}
