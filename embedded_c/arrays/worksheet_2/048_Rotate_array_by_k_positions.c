/*Rotate array by k positions
Question description:
Write a C program to rotate the elements of an array by k positions to the right.
Sample data:
Input: 1 2 3 4 5 k = 2
Expected output:
Output: 4 5 1 2 3*/
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
     printf("enter no of rotations\n");
     int rot;
     scanf("%d",&rot);
     
     for(int i=0;i<rot;i++)
     {
          int wet=arr[0];
          for(int j=0;j<(a-1);j++)
          {
               arr[j]=arr[j+1];
          }
          arr[a-1]=wet;
     }
     printf("updated array is:\t");
     for(int i=0;i<a;i++)
     {
          printf("%d",arr[i]);
     }
}