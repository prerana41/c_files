//function by with passing arg and without returning ans 

#include<stdio.h>
void add(int,int);
void add(int m,int n) //formal parameter
{
    int add;
    add=m+n;
    printf("\n addition =%d",add);
}
void main()
{
    int a,b;
    printf("\n enter two numbers :");
    scanf("%d%d",&a,&b);
    add(a,b); //function call with arg
}