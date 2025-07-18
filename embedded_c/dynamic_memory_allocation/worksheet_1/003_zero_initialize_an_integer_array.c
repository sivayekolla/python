#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter a value as no of elements to create:\n");
     scanf("%d",&a);
     int *arr=(int *)calloc(a,sizeof(int));
     printf("enter values:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     for(int i=0;i<a;i++)
     {
          printf("%d",arr[i]);
     }
      
         free(arr);
}