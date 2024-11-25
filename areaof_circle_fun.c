#include <stdio.h>
void area(int);
void area(int r)
{
    float a,pi=3.14;
    a=pi*r*r;
    printf("Area of circle is %f\n",a);
}
void main()
{
    int r;
    printf("\n enter the radius of circlr:");
    scanf("%d",&r);
    area(r);
    }