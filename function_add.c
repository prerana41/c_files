#include<stdio.h>
void add(); //fun declared
void add()
{ 
    int a,b,c;
    printf("enter a b = ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("addition = %d",c);
}
void main()
{
    printf("hello..");
    add();  //fun call
    printf("byee..");
    add();
}