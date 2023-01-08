
#include <stdio.h>
int main()
{
  int n, i, flag;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  printf("Prime numbers between 1 and %d are: ", n);
  for (i = 2; i <= n; ++i)
  {
    flag = 1;
    for (int j = 2; j <= i / 2; ++j)
    {
      if (i % j == 0)
      {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
      printf("%d ", i);
  }
  return 0;
}
