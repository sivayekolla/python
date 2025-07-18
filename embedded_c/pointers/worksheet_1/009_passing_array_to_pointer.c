#include<stdio.h>
#include<stdlib.h>
void ptr(int * ptr,int a)
{
     
     for(int i=0;i<a;i++)
     {
          printf("%d",*(ptr));
          ptr++;
     }
}
int main()
{
     int a;
     printf("enter the no of elements in array:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter array elements:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);    
     }
     ptr(arr,a);
}