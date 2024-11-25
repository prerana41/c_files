#include<stdio.h>
void main()
{
    //int a=10
    //int *ptr=&a;

    int a=10;
    int *ptr;
    ptr =&a;

    printf("value of a: %d\n", a);
    printf("address of a: %p\n", &a);
    printf("address of ptr: %p\n", ptr);
    printf("value of pointer variable: %d\n", *ptr);
}