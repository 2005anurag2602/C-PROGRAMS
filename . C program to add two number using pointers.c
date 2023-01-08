
#include <stdio.h>
int main()
{
    int a, b, sum;
    int *pa, *pb;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    pa = &a;
    pb = &b;

    sum = *pa + *pb;
    printf("Sum = %d\n", sum);
    return 0;
}
