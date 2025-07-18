#include<stdio.h>
#include<stdlib.h>
int main()
{
     int arr[10]={1,2,3,4,5,6,7,8,9,10};
     int *ptr=arr;
     int ptr1;
     for(int i=0;i<10;i++)
     {
          if(*ptr%2 ==0 && (*(ptr)+1)%2!=0)
          {
               ptr1=(*(ptr)+1);
               *(ptr)+1= *ptr;
               *ptr=ptr1;
          }
          ptr++;
     }
     ptr=arr;
     for(int i=0;i<10;i++)
     {
     printf("%d",*ptr);
     ptr++;
     }
}