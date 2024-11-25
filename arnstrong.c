#include<stdio.h>
void main()
{
   int num,sum=0,rem,temp;
   printf("enter number to check whether number is armstrong or not");
   scanf("%d",&num);
   temp=num;
   while(num>0)
   {
    rem=num%10;
    sum=sum+(rem*rem*rem);
    num=num/10;
   }
   if(temp==sum)
   {
    printf("armstrong number");
   }
   else
   {
    printf("not armstrong number");
   }

}