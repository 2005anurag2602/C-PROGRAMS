

#include <stdio.h>
#include <math.h>
#define PI 3.14159
// Function prototypes
float diameter(float radius);
float circumference(float radius);
float area(float radius);
int main()
{
    float radius, d, c, a;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    d = diameter(radius);
    c = circumference(radius);
    a = area(radius);
    printf("Diameter: %.2f\n", d);
    printf("Circumference: %.2f\n", c);
    printf("Area: %.2f\n", a);
    return 0;
}
float diameter(float radius)
{
    return 2 * radius;
}
float circumference(float radius)
{
    return 2 * PI * radius;
}
float area(float radius)
{
    return PI * radius * radius;
}
