
#include <stdio.h>
int main()
{
  int size, i, pos;
  int arr[100];
  printf("Enter size of the array: ");
  scanf("%d", &size);
  printf("Enter elements of the array: ");
  for (i = 0; i < size; ++i)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the position where the element is to be deleted: ");
  scanf("%d", &pos);
  // Shift elements of arr[pos+1...size-1] left by 1
  for (i = pos; i < size - 1; ++i)
  {
    arr[i] = arr[i + 1];
  }
  printf("Array after deleting element at given position:\n");
  for (i = 0; i < size - 1; ++i)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
