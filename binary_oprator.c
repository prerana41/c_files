#include <string.h>
void main()
{
    float div;
    int x,y,add,sub,mult,mod;
    printf("enter value of xand y=");
    scanf("%d%d",&x,&y);
    

    //...addition....
    add=x+y;
    printf("addition = %d\n",add);

    //...subtraction....
    sub=x-y;
    printf("Subtraction = %d\n",sub);

    //...multiplication....
    mult=x*y;
    printf("Multiplication = %d\n",mult);

    //...division....
        div=(float)x/y;
        printf("Division = %.2f\n",div);

    //...modulus....
    mod=x%y;
    printf("Modulus = %d\n",mod);
    
    }

    
    