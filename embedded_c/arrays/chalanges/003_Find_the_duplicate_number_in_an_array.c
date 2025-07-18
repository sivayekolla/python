/*
Find the duplicate number in an array of n+1 integers (each from 1 to n)
Use Floyd’s Cycle Detection or other space-efficient methods to detect a repeated number in the array without modifying the input.

Example: Input: [3, 1, 3, 4, 2]
Output: 3
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