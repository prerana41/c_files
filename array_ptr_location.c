//progeam to accept the element using pointer loacation.
#include<stdio.h>
void main()
{
    int arr[5],i;
    printf("enter the array elenent :\n");
    for(i=0;i<5;i++)
{
    printf("enter the array elenent at %d location :",i);
    scanf("%d",arr+i);
}
printf("\n display the array element:");
for(i=0;i<5;i++)
{
    printf("array element at location %d is %d :",i,(arr+i));
}
}