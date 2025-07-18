#include<stdio.h>
#include<stdlib.h>
void sip(int * arr,int a)
{
     for(int i=0;i<a;i++)
     {
          *arr=*arr+3;
          arr++;
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
     sip(arr,a);
     int *temp=(int *)realloc(arr,sizeof(int)*3);
     arr=temp;
     for(int i=0;i<3;i++)
     printf("%d",arr[i]);
}