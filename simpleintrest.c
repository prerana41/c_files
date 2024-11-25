#include<stdio.h>
  void simple(int,int,int);
  void simple(int p,int r,int t)
   {float si;
   si=(p*r*t)/100;
   printf("The simple interest is %f",si);
   }
   void main()
   {
    int p,r,t;
    printf("enter p,r,t :");
    scanf("%d %d %d",&p,&r,&t);
    simple(p,r,t);
   }
    