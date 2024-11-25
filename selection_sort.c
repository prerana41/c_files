//selection sort

#include<stdio.h>
void main()
{
    int n=5,i,j,temp;
    int arr[]= {4,5,1,3,5};

    printf("before sorting :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nafter sorting :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}