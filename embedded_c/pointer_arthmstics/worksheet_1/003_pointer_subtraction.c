/*Pointer Subtraction
Task: Given two pointers pointing to elements of an integer array, find the distance (number of elements) between them.

Sample data:

1
2
3
int arr[] = {2, 4, 6, 8, 10};
int *p1 = &arr[4];  // points to 10
int *p2 = &arr[1];  // points to 4
Expected output:

Distance between pointers is 3*/
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
     int d,count=0;
     printf("enter positions to find distence from end of array:\n");
     scanf("%d",&d);
     for(int i=1;i<=a;i++)
     {
          ptr++;
          if(i>d)
          {
              count++; 
          }
     }
     printf("the distence between position and last are %d:",count);
     

}