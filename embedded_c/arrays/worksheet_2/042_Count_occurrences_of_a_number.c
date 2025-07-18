/*
Count occurrences of a number

 
Question description:
Write a C program to count how many times a specific number appears in an array.
Sample data:
Input array: 1 2 3 2 2 5 Number to count: 2
Expected output:
Number 2 occurs 3 times
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
          if(arr[i]==b)
          {
               count++;
          }
     }
     printf("%d",count);
     
}