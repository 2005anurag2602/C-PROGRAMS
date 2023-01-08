
#include <stdio.h>
int main()
{
    int a[MAX_SIZE], b[MAX_SIZE], c[MAX_SIZE];
    int size_a, size_b, size_c;
    printf("Enter the size of the first array: ");
    scanf("%d", &size_a);
    printf("Enter the elements of the first array: \n");
    for (int i = 0; i < size_a; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &size_b);
    printf("Enter the elements of the second array: \n");
    for (int i = 0; i < size_b; i++)
    {
        scanf("%d", &b[i]);
    }
    size_c = size_a + size_b;
    int i, j, k;
    i = j = k = 0;
    while (i < size_a && j < size_b)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (i < size_a)
    {
        c[k++] = a[i++];
    }
    // Add remaining elements of b, if any
    while (j < size_b)
    {
        c[k++] = b[j++];
    }
    printf("The merged array is: \n");
    for (int i = 0; i < size_c; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}
