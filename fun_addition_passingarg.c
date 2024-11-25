
#include<stdio.h>
void add();
void add()
{
    int a,b,add;
    printf("enter the first num:");
    scanf("%d",&a);
    printf("enter the second num:");
    scanf("%d",&b);
    add=a+b;
    printf("addition=%d",add);

}
void main()
{
    add();
    printf("hello..\n");
    add();
}