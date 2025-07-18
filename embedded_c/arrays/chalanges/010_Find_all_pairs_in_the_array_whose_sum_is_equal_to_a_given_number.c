/*
Find all pairs in the array whose sum is equal to a given number
Given an array and a number, find all pairs whose sum equals the given number. Optimize for time complexity using hash map.

Example: Input: [1, 5, 7, -1, 5], Sum = 6
Output: Pairs (1,5), (7,-1), (1,5)
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements to be in a array:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter elements to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     int b;
     printf("enter sum to be :\n");
     scanf("%d",&b);
     for(int i=0;i<a;i++)
     {
          for(int j=0;j<a;j++)
          {
               if(i!=j)
               {
                    if((arr[i]+arr[j])==b)
                    {
                         printf("(%d,%d)\n",arr[i],arr[j]);
                    }
               }
          }
     }

}