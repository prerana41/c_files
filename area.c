#include<stdio.h>
void main()
{
    float p,r,si;
    int t;
    printf("Enter Principal amount (P), Rate of interest (R), and Time (T) in years: ");
    scanf("%f %f %d",&p,&r,&t);
    si = (p * r * t) / 100;
    printf("si=%f\n",si);
}