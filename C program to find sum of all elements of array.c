
#include <stdio.h>
int main()
{
  int size, i, sum = 0;
  int arr[100];
  printf("Enter size of the array: ");
  scanf("%d", &size);
  printf("Enter elements of the array: ");
  for (i = 0; i < size; ++i)
  {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  printf("Sum of all elements of array = %d", sum);
  return 0;
}
