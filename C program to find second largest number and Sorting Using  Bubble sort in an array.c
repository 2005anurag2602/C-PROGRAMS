
#include <stdio.h>
int main()
{
  int size, i, j, temp;
  int arr[100];
  printf("Enter size of the array: ");
  scanf("%d", &size);
  printf("Enter elements of the array: ");
  for (i = 0; i < size; ++i)
  {
    scanf("%d", &arr[i]);
  }
  // Find second largest number
  int max1 = 0, max2 = 0;
  for (i = 0; i < size; ++i)
  {
    if (arr[i] > max1)
    {
      max2 = max1;
      max1 = arr[i];
    }
    else if (arr[i] > max2 && arr[i] < max1)
    {
      max2 = arr[i];
    }
  }
  printf("Second largest number = %d\n", max2);
  // Sort the array using Bubble sort
  for (i = 0; i < size - 1; ++i)
  {
    for (j = 0; j < size - i - 1; ++j)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printf("Array after sorting:\n");
  for (i = 0; i < size; ++i)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
