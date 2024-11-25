//check whether the number is in range of 1 to 100.
#include<stdio.h>
void main()
{
    int num;
    printf("enter number =" );
    scanf("%d", &num);
    if(num>=1 && num<=100)
    {
        printf("%d is in range of 1 to 100");
    }
    else
    {
        printf("%d is not in range of 1 to 100");
    }
}