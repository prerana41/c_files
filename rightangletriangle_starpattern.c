/*  *
    **
    *
    ****
    *
    ******
*/

#include<stdio.h>
void main()
{
    int i,j;
    for(i=2;i<=7;i++)
    {
        if(i%2==0)
        {
            printf("*");
        }
        if(i%2==1)
        for(j=0;j<i;j++)
    {
        printf("*");
    }
    printf("\n");
    }
}