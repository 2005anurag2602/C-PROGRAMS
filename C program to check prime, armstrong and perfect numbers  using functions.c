
#include <stdio.h>
#include <math.h>
int is_prime(int n);
int is_armstrong(int n);
int is_perfect(int n);
int main()
{
    int n, prime, armstrong, perfect;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime = is_prime(n);
    armstrong = is_armstrong(n);
    perfect = is_perfect(n);
    if (prime)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
    if (armstrong)
    {
        printf("%d is an Armstrong number\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number\n", n);
    }
    if (perfect)
    {
        printf("%d is a perfect number\n", n);
    }
    else
    {
        printf("%d is not a perfect number\n", n);
    }
    return 0;
}
int is_prime(int n)
{
    int i;
    if (n <= 1)
    {
        return 0;
    }
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int is_armstrong(int n)
{
    int original, rem, result = 0, digits = 0;
    original = n;
    // Count the number of digits
    while (original != 0)
    {
        original /= 10;
        digits++;
    }
    original = n;
    // Check if the number is an Armstrong number
    while (original != 0)
    {
        rem = original % 10;
        result += pow(rem, digits);
        original /= 10;
    }
    return (n == result);
}
int is_perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return (n == sum);
}
