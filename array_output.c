//check the output
#include<stdio.h>
void main()
{
    int arr[5]={11,15,17,18,22};
    printf("arr=%d",arr);
    printf("\n arr[0]=%d",arr[0]);
    printf("\n arr[0]=%d",arr[0]);
    printf("\n (arr+1)=%d",(arr+1));
    printf("\n (arr+1)=%d",*(arr+1));
    printf("\n *(arr+2)=%d",*(arr+2));
    printf("\n &arr[0]+1=%d", &arr[0]+1);
}