//check the age if>60 check the intrest rate
#include<stdio.h>
void main()
{
    int age=61;
    char gender='m';
    if(age>=60)
    {
        if(gender=='f')
        {
            printf("8.75 intrest rate");

        }
        else{
            printf("9.56 intrest rate");
        }
    } else
    {
        printf("8 intrest rate");
    }