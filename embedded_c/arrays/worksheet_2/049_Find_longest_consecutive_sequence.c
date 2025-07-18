//49
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
     for(int i=0;i<a-1;i++)
     {
          for(int j=i+1;j<a;j++)
          {
               if(arr[i]>arr[j])
               {
                    int t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
               }
          }
     }
     int max=1,curr=1;
     for(int i=1;i<a;i++)
     {
          if(arr[i]==arr[i-1])
               continue;
          else if(arr[i]==arr[i-1]+1)
               curr++;
          else
               curr=1;
          if(curr>max)
               max=curr;
     }
     printf("Longest consecutive sequence length: %d\n",max);
}
