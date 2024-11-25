#include<stdio.h>
int main(){
    int col = 3;
    int row ;
    printf("enter no of rows");
    scanf("%d",&row);
    for(int i=0;i<col;i++){
        for(int j = 0;j<row;j++){
            if((i==1 && j != 0 ) && ( i==1 && j != row-1)){
                printf(" ");
            }
            else printf("*");
        }
        printf("\n");
    }

}