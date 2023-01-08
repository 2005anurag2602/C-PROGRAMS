
#include<stdio.h>
Int main ()
{
Int num1,num2,num3;
printf("Enter three numbers: ");
scanf("%d%d%d", &num1, &num2, &num3);
int max = (num1 > num2) ? num1 : num2;
max = (max > num3) ? max : num3;
printf("Maximum using conditional operator: %d\n", max);
max = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
printf("Maximum using ternary operator: %d\n", max);
return 0;
}
