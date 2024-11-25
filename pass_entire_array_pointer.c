//array by passing an entire array using *(pointer) notation
//to display marks of student

#include<stdio.h>
void displaymarks(int *, int);
int main()
{
    int mark[5]={65,72,77,82,79};
    displaymarks(mark, 5);
}

void displaymarks(int *ptemp, int inumber)

{
    int i;
    for(i=0;i<inumber;i++)
    {
        printf("%d\t",*(ptemp+i));
    }
}