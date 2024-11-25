//accept and display number using do while loop

#include<stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        printf("%d\n", num);
        scanf("%d",&num);
        sum=sum+num;
        printf("\n number = %d\n",num);
    }
    while(num != 0);

    return 0;
}