/*Find the intersection of two arrays

 
Question description:
Write a C program to find the union of two arrays (all unique elements from both arrays).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
intersrction: 3 4 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b;
     printf("enter no of elements in arr1:\n");
     scanf("%d",&a);
     printf("enter no of elements in arr2:\n");
     scanf("%d",&b);
     int *arr1=(int *)malloc(sizeof(int)*a);
     int *arr2=(int *)malloc(sizeof(int)*b);
     printf("enter then values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr1[i]);
     }
     for(int i=0;i<b;i++)
     {
          scanf("%d",&arr2[i]);
     }
     printf("\n");
     int arr3[20],l=0,flag=0;
     for(int i=0;i<a;i++)
     {
          for(int j=0;j<a;j++)
          {
               
               
                    if(arr1[i]==arr2[j])
                    {
                         flag=0;
                         for(int h=0;h<l;h++)
                         {
                              if(arr3[h]==arr1[i])
                              {
                                   flag=1;
                                   break;
                              }
                         }
                         if(flag==0)
                         {
                              arr3[l]=arr1[i];
                              l++;
                         }
                         break;
                    }
               
          }
     }
     printf("Total intersection elements: %d\n",l);
     for(int i=0;i<l;i++)
     {
          printf("%d",arr3[i]);
     }
     
}