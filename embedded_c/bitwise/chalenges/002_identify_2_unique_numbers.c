#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,count=0;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     for(int i=0;i<a;i++)
     {
          count=0;
          for(int j=0;j<a;j++)
          {
               if(i != j)
               {
                    if((arr[i]^arr[j])==0)
                    {
                         count++;
                    }
               }
          }
          if(count==0)
          {
               printf("\n%d\n",arr[i]);
          }
     }
}