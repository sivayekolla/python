/*
Sum of even numbers
Question description: Write a C program to find the sum of all even numbers in an array.
Sample data:
Input: 2 3 4 5 6
Expected output:
Sum of even numbers: 12
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,total=0;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter then values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     for(int i=0;i<a;i++)
     {
          if((arr[i]%2)==0)
          {
               total=total+arr[i];
          }
     }
     printf("the sum of even numbers are:%d\n",total);

}