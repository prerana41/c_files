#include<stdio.h>
void main()
{
    int n=5,i,j,temp;
    int arr[]= {4,5,1,3,5,6};

    printf("before sorting :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    for(i=0;i<n;i++)   //passes
    {
        for(j=0;j<n-1;j++)  //compares
        {
            if(arr[j]>arr[j+1])  //swapping
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n after sorting :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
    }