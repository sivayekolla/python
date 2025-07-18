#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b;
     printf("enter a value as no of elements to create:\n");
     scanf("%d %d",&a,&b);
     int *arr=(int *)malloc(sizeof(int)*a);
     int *arr1=(int *)calloc(b,sizeof(int));
     printf("enter values in array 1 and array 2:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     for(int i=0;i<b;i++)
     {
          scanf("%d",&arr1[i]);
     }
     for(int i=0;i<a;i++)
     {
          printf("%d ",arr[i]);
     }
     for(int i=0;i<b;i++)
     {
          printf("%d ",arr1[i]);
     }
     free(arr);free(arr1);

}