/*
Question: Merge two arrays
Question description: Write a C program to merge two arrays into a third array.
Sample data:
Array 1: 1 2 3
Array 2: 4 5 6
Expected output:
Merged array: 1 2 3 4 5 6
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b;
     printf("enter no of elements in 1 and 2 arrays:\n");
     scanf("%d %d",&a,&b);
     int *arr1=(int *)malloc(sizeof(int)*a);
     int *arr2=(int *)malloc(sizeof(int)*b);
     int c=a+b;
     int *arr3=(int *)malloc(sizeof(int)*c);
     printf("enter elements into 1st array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr1[i]);
     }
     printf("enter elements in 2nd array:\n");
     for(int i=0;i<b;i++)
     {
          scanf("%d",&arr2[i]);
     }
     int count=0;
     for(int i=0;i<a;i++)
     {
          arr3[count]=arr1[i];
          count++;
     }
     for(int j=0;j<b;j++)
     {
          arr3[count]=arr2[j];
          count++;
     }
     for(int i=0;i<c;i++)
     {
          printf("%d ",arr3[i]);
     }
}