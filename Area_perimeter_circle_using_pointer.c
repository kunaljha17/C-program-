#include <stdio.h>
float area(float*);

float perimeter(float *);
float area(float *r)
{
    return 3.14 * (*r) * (*r);
}
float perimeter(float *r)
{
    return 2 * 3.14 * (*r);
}

int main()
{
    float r;
    printf("Enter radius of circle\n");
    scanf("%f", &r);
    printf("Area of circle is %.2f\n",area(&r));
     printf("perimeter of circle is %.2f",perimeter(&r));
    return 0;
}