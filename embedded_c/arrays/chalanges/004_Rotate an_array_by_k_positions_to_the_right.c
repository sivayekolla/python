/*
Rotate an array by 'k' positions to the right
Efficiently rotate an array of size n by k steps. Implement both brute force and optimized solutions (like reversal algorithm).

Example: Input: [1, 2, 3, 4, 5, 6, 7], k = 3
Output: [5, 6, 7, 1, 2, 3, 4]
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