#include<stdio.h>
void main()
{
    int choice;
printf("1.marathi\n 2.hindi\n 3.english");
printf("enter your choice:");
scanf("%d", &choice);
switch(choice)

{
           case 1:printf("you have choice marathi.");
           break;
           case 2: printf("you have choice hindi.");
           break;
           case 3: printf("you have choice english.");
           break;
           default: printf("invalid choice");
           break;
}
}