/*Reverse Array using Pointer Arithmetic
Task: Write a function that reverses an integer array in place using pointer arithmetic only (no array indexing).

Sample data:

1
int arr[] = {1, 2, 3, 4, 5};
Expected output:

Reversed array: 5 4 3 2 1*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,temp;
     printf("enter no of values in array:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     int *ptr=arr;
     int *ptr1=arr+a-1;
     for(int i=0;i<(a/2);i++)
     {
           temp=*(ptr);
          *(ptr)=*(ptr1);
          *(ptr1)=temp;
          ptr++;ptr1--;
     }
     puts("the updated array is:\n");
     for(int i=0;i<a;i++)
     {
          printf("%d",arr[i]);
     }


}