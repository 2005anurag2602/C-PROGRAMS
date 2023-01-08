
#include <stdio.h>
int main()
{
  int n, i, j, sum, fact, originalN;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  printf("Strong numbers between 1 and %d are: ", n);
  for (i = 1; i <= n; ++i)
  {
    originalN = i;
    sum = 0;
    while (i > 0)
    {
      fact = 1;
      int lastDigit = i % 10;
      for (j = 1; j <= lastDigit; ++j)
        fact *= j;
      sum += fact;
      i /= 10;
    }
    if (sum == originalN)
      printf("%d ", originalN);
    i = originalN;
  }
  return 0;
}
