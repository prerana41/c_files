/*accept the num from user print num if it is multiple of 5 if it is not then ask for another number stop when user enrer 0 */

#include<stdio.h>
void main()
{
    int num;
    do 
    {
        printf("enter the num = ");
        scanf("%d", &num);
        if(num%5! =0) 
        continue;
    else
    printf("number %d is multiple of 5",num);
    exit(0);   
    }
}