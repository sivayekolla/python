#include<stdio.h>
#include<stdlib.h>

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
     int *ptr=arr;
     int **ptr1=&ptr;
     for(int i=0;i<a;i++)
     {
          
          **ptr1=**ptr1+4;
          
          printf("%d",**ptr1);
         (*ptr1)++;
     }

}