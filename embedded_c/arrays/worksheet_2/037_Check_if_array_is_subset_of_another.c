/*
Check if array is subset of another
Question description:
Write a C program to check if one array is a subset of another array.
Sample data:
Array 1: 1 2 3 4 5 Array 2: 2 4 5
Expected output:
Array2 is a subset of Array1

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b;
     printf("enter size of array1:\n");
     scanf("%d",&a);
     int *arr1=(int *)malloc(sizeof(int)*a);
     printf("enter elements of array1:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr1[i]);
     }
     printf("enter size of array2:\n");
     scanf("%d",&b);
     int *arr2=(int *)malloc(sizeof(int)*b);
     printf("enter elements of array2:\n");
     for(int i=0;i<b;i++)
     {
          scanf("%d",&arr2[i]);
     }
     int count=0;
     for(int i=0;i<b;i++)
     {
          for(int j=0;j<a;j++)
          {
               if(arr2[i]==arr1[j])
               {
                    count++;
                    break;
               }
          }
     }
     if(count==b)
          printf("Array2 is a subset of Array1\n");
     else
          printf("Array2 is not a subset of Array1\n");
}
