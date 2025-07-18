//44
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     int *pos=(int *)malloc(sizeof(int)*a);
     int *neg=(int *)malloc(sizeof(int)*a);
     printf("enter the values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     int p=0,n=0;
     for(int i=0;i<a;i++)
     {
          if(arr[i]>=0)
               pos[p++]=arr[i];
          else
               neg[n++]=arr[i];
     }
     int i=0,j=0,k=0;
     while(i<p && j<n)
     {
          arr[k++]=neg[j++];
          arr[k++]=pos[i++];
     }
     while(i<p)
     {
          arr[k++]=pos[i++];
     }
     while(j<n)
     {
          arr[k++]=neg[j++];
     }
     printf("Rearranged array: ");
     for(int i=0;i<a;i++)
     {
          printf("%d ",arr[i]);
     }
}
