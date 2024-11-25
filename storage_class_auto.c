//program for storage class..auto
#include<stdio.h>
void function();
void main()
{
    int a=15;
    function();

    {
        //block 1
        int a;
        printf("\n inside block1 a is %d\n", a);
    }
    {
        //block2
        int a=4;
        printf("\n inside block2 a is %d\n", a);

    }
    printf("\n inside main a is %d\n", a);
}
void function()
{
    int a=100;
    printf("\n inside function a is %d\n", a);
}