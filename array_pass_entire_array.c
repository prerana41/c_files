//array by passing by an entire array using[] not
//to display marks of students

#include<stdio.h>
void displaymarks(int[],int);
int main()
{
    int marks[5]={65,72,77,82,79};

    displaymarks(marks,5);

}
void displaymarks(int tempmarks[],int inumber)
{
    int i;
    for(i=0;i<inumber;i++)
    printf("%d\t ",tempmarks[i]);

}