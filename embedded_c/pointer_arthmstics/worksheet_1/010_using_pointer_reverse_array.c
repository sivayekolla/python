#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of array elements required:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter array elements:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     int temp;
     int *fnt=arr;
     int *bck=arr+a-1;
     for(int i=0;i<(a/2);i++)
     {
        temp=*fnt;
        *fnt=*bck;
        *bck=temp;  
        fnt++;bck--;
     }
     for(int i=0;i<a;i++)
     {
          printf("%d",arr[i]);
     }
}