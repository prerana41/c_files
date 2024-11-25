#include<stdio.h>
void show()
{
    extern int a;
    printf("this is from storage extern class..");
    printf("value of a = %d\n", a);
}