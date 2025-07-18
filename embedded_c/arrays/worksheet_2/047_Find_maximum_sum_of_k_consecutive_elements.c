//47
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter the values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     int k;
     printf("enter value of k:\n");
     scanf("%d",&k);
     int sum=0,max=0;
     for(int i=0;i<k;i++)
     {
          sum+=arr[i];
     }
     max=sum;
     for(int i=k;i<a;i++)
     {
          sum=sum-arr[i-k]+arr[i];
          if(sum>max)
               max=sum;
     }
     printf("Maximum sum of %d consecutive elements: %d\n",k,max);
}
