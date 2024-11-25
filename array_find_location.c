//program to find the location of element in array or not.

#include<stdio.h>
#define size 5
void main()
{
    int num,i,a[size]={3,6,9,12},flag=0;
    printf("enter the num to find:");
    scanf("%d",&num);
    for(i=0;i<4;i++)
    {
        if(num==a[i])
        {
            printf("%d is present at location %d",num,i+1);
            flag=1;
        }
    }
    if(flag==0)
    printf("%d is not present in array",num);
}
