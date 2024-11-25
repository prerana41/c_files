#include<stdio.h>
void main()
{
    int s[5]={1,2,3,4,5};
    int *p1,*p2,add,sub;
    p1=&s[0];
    p2=&s[2];
    p1++;
      printf("after increament p1=%d ,*P1");
      p2--;
       printf("\n after decrement p2=%d",*p2);

       if(p1==p2)

       printf("\n p1 and p2 are pointing to same location");

       else

       printf("\n not pointing to same location");
       add=*p1+*p2;
       printf("\n addition of two pointer = %d",add);
}