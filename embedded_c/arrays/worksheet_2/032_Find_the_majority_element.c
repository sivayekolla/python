/*
Find the majority element
Question description:
Write a C program to find the majority element in an array (element appearing more than n/2 times).
Sample data:
Input: 2 2 1 2 3 2 2
Expected output:
Majority element: 2
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
     int count=0,can=0;
     for(int i=0;i<a;i++)
     {
          if(count==0)
          {
               can=arr[i];
               count=1;
          }
          else if(arr[i]==can)
          {
               count++;
          }
          else
          {
               count--;
          }
     }
     count=0;
     for(int i=0;i<a;i++)
     {
          if(arr[i]==can)
               count++;
     }
     if(count>a/2)
          printf("Majority element: %d\n",can);
     else
          printf("No majority element\n");
}
