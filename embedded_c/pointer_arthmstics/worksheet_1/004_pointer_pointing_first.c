#include<stdio.h>
int main()
{
     int arr[5]={1,2,3,4,5};
     int *a=&arr[2];
     int *b=&arr[3];
     int *a1=&arr;
     int g=5;
     while(g>0)
     {
          if(arr[g-1]==*a)
          {
               printf("a comming first:");
               break;
          }
          if(arr[g-1]==*b)
          {
               printf("b comming first:\n");
               break;
          }
          
     }
}