#include<stdio.h>
void main()
{
    int arr[5],i;
    printf("enter array element :\n");
    for(i=0;i<5;i++)
    {
        printf("enter array element at %d locatuon :\n",i);
        scanf("%d",arr+i);
    }
    printf("display array element :\n");
    for(i=0;i<5;i++)
    {
        printf("array element at location%d is %d\n",i,(arr+i);
    }
}