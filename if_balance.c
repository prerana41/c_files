//if balance is less than 1000 then showlow balance 
#include<stdio.h>
void main()
{
    float balance;
    printf("enter ammount = ");
    scanf("%f", &balance);
    if(balance<1000)
    {
        printf("low balance =!!!");
    }
}