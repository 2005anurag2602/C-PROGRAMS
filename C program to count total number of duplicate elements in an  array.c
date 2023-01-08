
#include <stdio.h>
int main()
{
  int size, i, j, count = 0;
  int arr[100];
  printf("Enter size of the array: ");
  scanf("%d", &size);
  printf("Enter elements of the array: ");
  for (i = 0; i < size; ++i)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < size; ++i)
  {
    for (j = i + 1; j < size; ++j)
    {
      if (arr[i] == arr[j])
      {
        ++count;
        break;
      }
    }
  }
  printf("Total number of duplicate elements in the array = %d", count);
  return 0;
}
