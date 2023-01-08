
#include <stdio.h>
int main()
{
  int size, i, pos, element;
  int arr[100];
  printf("Enter size of the array: ");
  scanf("%d", &size);
  printf("Enter elements of the array: ");
  for (i = 0; i < size; ++i)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the element to be inserted: ");
  scanf("%d", &element);
  printf("Enter the position where the element is to be inserted: ");
  scanf("%d", &pos);

  // Shift elements of arr[pos...size-1] right by 1
  for (i = size - 1; i >= pos; --i)
  {
    arr[i + 1] = arr[i];
  }
  // Insert element at given position
  arr[pos] = element;
  printf("Array after inserting element at given position:\n");
  for (i = 0; i < size + 1; ++i)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
