/*
Sort array in descending order
Question description: Write a C program to sort array elements in descending order.
Sample data:
Input: 7 2 9 4
Expected output:
Sorted array: 9 7 4 2
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter elements into array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     for(int i=0;i<a-1;i++)
     {
          for(int j=0;j<(a-i-1);j++)
          {
          if(arr[j]<arr[j+1])
          {
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
          }
          }
     }
     for(int i=0;i<a;i++)
     {
          printf("%d",arr[i]);
     }
}