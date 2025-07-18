#include<stdio.h>
int swap(int *ptr,int *ptr1);
int main()
{
     int arr[5]={1,2,3,4,5};
     int c=swap(arr,arr);
     printf("%d",c);
}
int swap(int *ptr,int *ptr1)
{
     if(*ptr != *ptr1)
     {
          return 0;
     }
}