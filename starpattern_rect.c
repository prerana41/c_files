/*print rectangle of * rows=6, column=4
    ****
    ****
    ****
    ****
    ****
    ****
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
