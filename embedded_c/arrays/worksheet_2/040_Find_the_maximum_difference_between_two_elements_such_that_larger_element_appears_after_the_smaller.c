/*
Find the maximum difference between two elements such that larger element appears after the smaller
Question description:
Write a C program to find the maximum difference between two elements in an array such that the larger element appears after the smaller element.
Sample data:
Input: 2 3 10 6 4 8 1
Expected output:
Maximum difference: 8 (10 - 2)

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter the values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     int min=arr[0],max_diff=arr[1]-arr[0];
     for(int i=1;i<a;i++)
     {
          if(arr[i]-min>max_diff)
               max_diff=arr[i]-min;
          if(arr[i]<min)
               min=arr[i];
     }
     printf("Maximum difference: %d\n",max_diff);
}
