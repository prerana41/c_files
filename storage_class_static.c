//program for storage class..static.
#include<<stdio.h>
void show();
void main()
{
    show();
    show();
    //printf("a=%d",a);       //scope is within the function.
}
void show()
{
    static int a=20; //lifrtime throughout program. initillize via a=0
    int b=10;
    a=a+10;
    b--;
    printf("a=%d",a); 
    printf("b=%d",b); 
}
