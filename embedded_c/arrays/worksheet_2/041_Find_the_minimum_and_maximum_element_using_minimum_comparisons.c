/*
Find the minimum and maximum element using minimum comparisons

 
Question description:
Write a C program to find minimum and maximum elements using minimum number of comparisons.
Sample data:
Input: 1000 11 445 1 330 3000
Expected output:
Minimum element is 1 Maximum element is 3000
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b=0;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter then values yo array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("\n\n");

     int *max=arr;
     int *min=arr;
     for(int i=0;i<a;i++)
     {
          if(*(max)< *(arr+i))
          {
               max=arr+i;
          }
          if(*(min)> *(arr+i))
          {
               min=arr+i;
          }
     }
     printf("max:%d and min:%d",*(max),*(min));
}