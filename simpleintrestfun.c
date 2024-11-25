#include<stdio.h>
  void simple();
  void simple()
  {
    int p,t,r;
    float si;
    printf("Enter Principal, Rate, and Time: ");
    scanf("%d %d %d",&p,&r,&t);
    si = (p * r * t) / 100;
    printf("Simple Interest = %f", si);
  }
 void main()
 {
    simple();
 }