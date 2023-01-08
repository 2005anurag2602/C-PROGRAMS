
#include <stdio.h>
int main()
{
  int n, i;
  int digits[10] = {0};
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n > 0)
  {
    digits[n % 10]++;
    n /= 10;
  }
  printf("Digit:\t\tFrequency:\n");
  for (i = 0; i < 10; ++i)
  {
    printf("%d\t\t%d\n", i, digits[i]);
  }
  return 0;
}
