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
     int *w=arr;
     for(int i=0;i<a;i++)
     {
          count=0;
          int v=*(w);
          for(int j=31;j>=0;j--)
          {
               if((v>>j)&1)
               {
                    count++;
               }
          }
          printf("\n%d : %d",arr[i],count);
        
          w++;
     }
     free(arr);
}