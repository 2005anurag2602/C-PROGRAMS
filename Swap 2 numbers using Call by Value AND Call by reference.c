
#include <stdio.h>
void swap_by_value(int x, int y);
void swap_by_reference(int *x, int *y);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping (call by value): a = %d, b = %d\n", a, b);
    swap_by_value(a, b);
    printf("After swapping (call by value): a = %d, b = %d\n", a, b);
    printf("Before swapping (call by reference): a = %d, b = %d\n", a, b);
    swap_by_reference(&a, &b);
    printf("After swapping (call by reference): a = %d, b = %d\n", a, b);
    return 0;
}
void swap_by_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swap_by_reference(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
