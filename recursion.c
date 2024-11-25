//program to calculate factorial using recursion.
#include<stdio.h>
int fact(int);
int fact(int x)
{
    int res;
    if(x==1 || x==0)
    return 1;
else
    res = x * fact(x-1);
    return res;
}
void main()
{
    int n=4,res;
    res=fact(n);
    printf("result: %d\n",res);
}