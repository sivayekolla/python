/*
Delete element at position
Question description: Write a C program to delete a number at a given position in an array.
Sample data:
Array: 10 20 30 40
Delete at position: 2
Expected output:
Array after deletion: 10 20 40
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b;
     printf("enter no of elements and position to remove:\n");
     scanf("%d %d",&a,&b);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter elements into array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     
               for(int j=b;j<a;j++)
               {
               arr[j]=arr[j+1];
               }
     for(int i=0;i<(a-1);i++)
     {
          printf("%d",arr[i]);
     }
          
}
     
