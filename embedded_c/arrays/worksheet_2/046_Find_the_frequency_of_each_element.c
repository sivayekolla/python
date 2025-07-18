//46
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     int *vis=(int *)malloc(sizeof(int)*a);
     printf("enter the values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
          vis[i]=0;
     }
     for(int i=0;i<a;i++)
     {
          if(vis[i]==1)
               continue;
          int count=1;
          for(int j=i+1;j<a;j++)
          {
               if(arr[i]==arr[j])
               {
                    count++;
                    vis[j]=1;
               }
          }
          printf("%d: %d ",arr[i],count);
     }
}
