/*Pointer Addition
Task: Using the same array, print the last element by adding an integer to the pointer.

Sample data:

1
int arr[] = {5, 10, 15, 20, 25};
Expected output:

Last element is 25*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,k;
     printf("enter no of values in array:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     int *ptr=arr;
     for(int i=0;i<k;i++)
     {
          if(i==(a-1))
          {
          printf(" the last element is :%d",*(ptr));
          }
          ptr++;

     }
}