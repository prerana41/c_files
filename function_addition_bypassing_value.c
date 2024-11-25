#include<stdio.h>
int add(int,int);
int add(int m,int n) //formal parameter
{
    int add;
    add=m+n;
    return add;
}
void main()
{
    int res,m,n;
    printf("enter the two numbers");
    scanf("%d%d",&m,&n);
    res=add(m,n); 
    printf("\naddition = %d\n",res);
}