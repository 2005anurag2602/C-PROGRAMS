#include <stdio.h>
int main()
{
  int size, i, element, found = 0;
  int arr[100];
  printf("Enter size of the array: ");
  scanf("%d", &size);
  printf("Enter elements of the array: ");
  for (i = 0; i < size; ++i)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the element to be searched: ");
  scanf("%d", &element);
  for (i = 0; i < size; ++i)
  {
    if (arr[i] == element)
    {
      found = 1;
      printf("Element %d found at position %d\n", element, i + 1);
      break;
    }
  }
  if (found == 0)
    printf("Element %d not found in the array\n", element);
  return 0;
}
