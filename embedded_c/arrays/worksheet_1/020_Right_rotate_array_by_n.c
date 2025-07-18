/*
 Right rotate array by n
Question description: Write a C program to rotate an array to the right by n positions.
Sample data:
Array: 1 2 3 4 5
Rotate by: 2
Expected output:
Rotated array: 4 5 1 2 3
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
     printf("enter no of rotations\n");
     int rot;
     scanf("%d",&rot);
     
     for(int i=0;i<rot;i++)
     {
          int wet=arr[a-1];
          for(int j=(a-1);j>0;j--)
          {
               arr[j]=arr[j-1];
          }
          arr[0]=wet;
     }
     printf("updated array is:\t");
     for(int i=0;i<a;i++)
     {
          printf("%d",arr[i]);
     }
}