#include<stdio.h>

int a=10;
void main()
{
    extern int a;
    printf("a=%d\n", a);
}

//int a=50
//extern var can access this variable.