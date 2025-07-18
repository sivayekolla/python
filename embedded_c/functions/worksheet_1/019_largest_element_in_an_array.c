#include<stdio.h>
#include<stdlib.h>
int find(int * arr1,int b);
int main()
{
     int a;
     printf("enter no of elements in an array\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter the values to array\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     
     int v=find(arr,a);
     printf("the largest element is:%d",v);
}
int find(int * arr1,int b)
{
     int val=0;
     for(int i=0;i<b;i++)
     {
          if(arr1[i]>val)
          {
               val=arr1[i];
          }
     }
     return val;
}