/*
Find maximum sum of k consecutive elements
Question description:
Write a C program to find maximum sum of k consecutive elements in an array.
Sample data:
Input: 2 3 4 1 5 6 7 k = 3
Expected output:
Maximum sum of 3 consecutive elements: 18
*/

#include<stdio.h>
#include<stdlib.h>
int amin()
{
     int a,b;
     printf("enter no of array elements\n");
     scanf("%d",&a);
     printf("enter no of elements to sum:\n");
     scanf("%d",&b);
     int *arr=(int *)malloc(sizeof(int)*a);
     int min=-1;
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     for(int i=0;i<a;i++)
     {
          int max=0;
          for(int j=0;j<b;j++)
          {
               max=arr[i+j];
          }
          if(max>min)
          {
               min=max;
          }
     }
     printf("%d",min);


}