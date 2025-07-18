/*
Difference between max and min
Question description: Write a C program to find the difference between largest and smallest elements in an array.
Sample data:
Input: 5 1 9 3 6
Expected output:
Difference: 8
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
     int f=(*(max)-*(min));
     printf("the diffrence between max and in is %d\t",f);
}