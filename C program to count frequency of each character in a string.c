.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int count[256] = {0};
    int i;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;
    }
    for (i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            printf("'%c' occurs %d times\n", i, count[i]);
        }
    }
    return 0;
}

