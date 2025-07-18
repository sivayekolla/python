/*
Find duplicate elements
Question description: Write a C program to find all duplicate elements in an array.
Sample data:
Input: 1 2 3 2 4 1
Expected output:
Duplicate elements: 1 2
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter then values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("\n");
     int arr1[20],l=0,flag=0;
     for(int i=0;i<a;i++)
     {
          for(int j=0;j<a;j++)
          {
               if(i!=j)
               {
                    if(arr[i]==arr[j])
                    {
                         flag=0;
                         for(int h=0;h<l;h++)
                         {
                              if(arr1[h]==arr[i])
                              {
                                   flag=1;
                                   break;
                              }
                         }
                         if(flag==0)
                         {
                              arr1[l]=arr[i];
                              l++;
                         }
                         break;
                    }
               }
          }
     }
     printf("Total duplicate elements: %d\n",l);
     for(int i=0;i<l;i++)
     {
          printf("%d ",arr1[i]);
     }
}