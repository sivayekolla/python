/*
Find product of all elements

 
Question description:
Write a C program to find the product of all elements in the array.
Sample data:
Input: 1 2 3 4
Expected output:
Product: 24
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter then values yo array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     int b;
     printf("enter the number to count:\n");
     scanf("%d",&b);int count =0;
     for(int i=0;i<a;i++)
     {
          count=count+arr[i];
     }
     printf("%d",count);
}