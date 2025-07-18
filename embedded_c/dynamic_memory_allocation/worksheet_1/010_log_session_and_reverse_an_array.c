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
     int *ptr=arr;
     for(int i=a;i>=0;i--)
     {
          ptr=arr+a;
          printf("%d\n",*(ptr));
     }
}