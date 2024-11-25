#include<stdio.h>
#include "67_storage_extern.c"
   extern void show();

   /*if we dont write extern then also it will run beacuse we include thant file*/
   int a=10;
   void main()
   {
    show();
   }