
//To check whether the person is eligible for vote or not.
#include<stdio.h>
void main()
{

    int age;
    printf("enter your age:\n);
    scanf("%d", &age);
    
    if(age >= 18) {
    printf("You can vote");
    }
    else
    {
     printf("You cannot vote");
    }
    

}