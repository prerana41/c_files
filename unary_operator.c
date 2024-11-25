#include<stdio.h>
void main()
{
    int a=20,b,c;
    printf("value of a= %d \n",a);
    b=-a;             //unary operator
    printf("value of b = %d\n",b);

    c=++a;        //pre increment
    printf("value of c=%d\n",c);
    printf("value of a= %d \n",a);

    c=a++; //post increment
    printf("value of c=%d\n",c);
    printf("value of a= %d \n",a);

    c=--a; //post decrement
    printf("value of c=%d\n",c);
    printf("value of a= %d \n",a);


}