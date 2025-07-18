//45
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
     int index=0;
     for(int i=0;i<a;i++)
     {
          if(arr[i]!=0)
          {
               arr[index]=arr[i];
               index++;
          }
     }
     while(index<a)
     {
          arr[index]=0;
          index++;
     }
     printf("Output: ");
     for(int i=0;i<a;i++)
     {
          printf("%d ",arr[i]);
     }
}
