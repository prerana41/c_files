//function by with passing arg and without returning ans

#include<stdio.h>
void add(int,int);
void add(int m, int n)  //formal parameter
   {
  int add;
    add=m+n;
    printf("\nAddition =%d",add);
}
void main()
{
    int a,b;
    printf("\nEnter two numbers :");
    scanf("%d%d",&a,&b);
    add(a,b); //function call by passing value
}