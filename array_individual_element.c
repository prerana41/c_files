//array by passing individual elements
//to display the mark of student

#include<stdio.h>
void displaymarks(int);       //prototype
int main()
{
    int i,mark[5]={65,72,77,82,79};
    for(i=0;i<5;i++)
    displaymarks(mark[i]);
}
void displaymarks(int ielement)
{
    printf("%d\t",ielement);
}