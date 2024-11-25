#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(i==j)
            continue;
        else
        printf("\n \t%d---%d",i,j);
        }
    }
}