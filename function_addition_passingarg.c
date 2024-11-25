//function by without passing arg and returning ans

#include<stdio.h>
int add();
int add() //formal parameter
{
    int add,m,n;
    printf("Enter two numbers: ");
    scanf("%d%d", &m, &n);
    add=m+n;
    return add;
}

void main()
{
    int res;
    res=add();
    printf("\n addition =%d",res);
}