#include<stdio.h>
void main()
{
    int i,num,f1=0,f2=1,f3;
    printf("enter the number upto which you want fibonacci series:");
    scanf("%d",&num);
    printf("%d\t %d\t",f1,f2);
    for(i=2;i<=num;i++)
    {
        f3=f1+f2;
        printf("%d\t",f3);
        f1=f2;
        f2=f3;
    }
}

