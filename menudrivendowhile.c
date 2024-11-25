//menu driven progress using do while

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,add,sub,mul,choice;
    float div;
    char ch;
    do{
    printf("*****Menu*****");
    printf("\n 1.Addition \n 2.Substraction \n 3.Multiplication \n 4.Division \n 5.Exit\n");
    printf("enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 : printf("\n enter values of a and b ");
        scanf("%d%d",&a,&b);
        add=a+b;
        printf("\nAddition = %d",add);
        break;

        case 2 : printf("\n enter values of a and b ");
        scanf("%d%d",&a,&b);
        sub=a-b;
        printf("\nSubstraction = %d",sub);
        break;

        case 3 : printf("\n enter values of a and b ");
        scanf("%d%d",&a,&b);
        mul=a*b;
        printf("\nMultiplication = %d",mul);
        break;

        case 4 : printf("\n enter values of a and b ");
        scanf("%d%d",&a,&b);
        div=a/b;
        printf("\nDivision= %f",div);
        break;

        case 5:exit(0);

        default : printf("entervalid choice..");
        break;
    }
        printf("\n Do you want to continue if yes press'y' or 'Y'");
        fflush(stdin);
        scanf("%c",&ch);
        
    }while(ch=='y' || ch=='Y');
}