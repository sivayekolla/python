/*
Find the union of two arrays
Question description:
Write a C program to find the union of two arrays (all unique elements from both arrays).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
Union: 1 2 3 4 5 6
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
     int *unionArr=(int *)malloc(sizeof(int)*(a+b));
     int k=0,flag;
     for(int i=0;i<a;i++)
     {
          unionArr[k++]=arr1[i];
     }
     for(int i=0;i<b;i++)
     {
          flag=0;
          for(int j=0;j<a;j++)
          {
               if(arr2[i]==arr1[j])
               {
                    flag=1;
                    break;
               }
          }
          if(flag==0)
               unionArr[k++]=arr2[i];
     }
     printf("Union: ");
     for(int i=0;i<k;i++)
     {
          printf("%d ",unionArr[i]);
     }
}
