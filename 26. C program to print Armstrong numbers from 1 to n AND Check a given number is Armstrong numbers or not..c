

#include <stdio.h>
int main()
{
  int n, i, originalN, remainder, result;
  // Print Armstrong numbers from 1 to n
  printf("Enter the upper limit: ");
  scanf("%d", &n);
  printf("Armstrong numbers between 1 and %d are: ", n);
  for (i = 1; i <= n; ++i)
  {
    originalN = i;
    result = 0;
    while (originalN != 0)
    {
      remainder = originalN % 10;
      result += remainder * remainder * remainder;
      originalN /= 10;
    }
    if (result == i)
      printf("%d ", i);
  }
  // Check if a given number is an Armstrong number or not
  int num;
  printf("\nEnter a number to check if it is an Armstrong number: ");
  scanf("%d", &num);
  originalN = num;
  result = 0;
  while (originalN != 0)
  {
    remainder = originalN % 10;
    result += remainder * remainder * remainder;
    originalN /= 10;
  }
  if (result == num)
    printf("%d is an Armstrong number.", num);
  else
    printf("%d is not an Armstrong number.", num);
  return 0;
}
