/*
Find second smallest element
Question description:
Write a C program to find the second smallest element in the array.
Sample data:
Input: 12 13 1 10 34 1
Expected output:
Second smallest element is 10
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
     int min2=arr[0];
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
     min2=*(min);
     for(int i=0;i<a;i++)
     {
                    if(arr[i]<*min && arr[i]>(min2))
          {
               min2=arr[i];
          }
     }
     printf("2nd min:%d",min2);
}