#include<stdio.h>
void main()
{
    int n;
    printf("enter a integer :");
    scanf("%d",&n);
    for(int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }

   
}



