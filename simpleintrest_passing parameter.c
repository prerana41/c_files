#include<stdio.h>
void area();
void area()
{
    int r;
    float a,pi=3.14;
    printf("enter the radius of circle :");
    scanf("%d",&r);
    a=pi*r*r;
    printf("\n area of circlr is : %f",a);
    }
    void main()
    {
        area();
    }