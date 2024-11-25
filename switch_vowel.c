#include<stdio.h>
void main()
{
    char ch;
    printf("enter your choice :");
    scanf("%c", &ch);
    switch (ch)
    {
        case 'a' : case 'e' : case 'i' : case 'o' : case 'u' : 
        case 'A' : case 'E' : case 'I' : case 'O' : case 'U' : 

        printf("\n it is vowel :");
        break;
        default :
        printf("other character");
    }
    
    }