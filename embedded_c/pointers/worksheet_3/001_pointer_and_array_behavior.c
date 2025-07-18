#include<stdio.h>
int main()
{
     int arr[5]={1,2,3,4,5};
     int *ptr=arr;
     for(int i=0;i<5;i++)
     {
     printf("%d %x %x\n",*ptr,ptr,&arr[i]);
     ptr++;
     }
     printf("\nthe size of %d ptr and %d arr",sizeof(ptr),sizeof(arr));
}
