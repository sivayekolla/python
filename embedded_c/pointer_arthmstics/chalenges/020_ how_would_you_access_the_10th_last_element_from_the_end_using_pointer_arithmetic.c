/*
 Given int *p = (int *)malloc(n * sizeof(int));, how would you access the 10th last element from the end using pointer arithmetic, assuming n is unknown but the end address is available?
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter the no of elements in array:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter array elements:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);    
     }
     int *ptr=arr;
     for(int i=1;i<=a;i++)
     {
          if(i==a)
          {
               printf("%d",*ptr);
          }
          ptr++;
     }
}