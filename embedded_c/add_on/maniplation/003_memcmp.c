#include<stdio.h>
#include<string.h>
int main()
{
     char arr[30]="jhbdjbcjbd";
     char arr1[30]="uygjhjdbc";
     int c=memcmp(arr,arr1,10);
     if(!c)
     {
          printf("same");
     }
     else
     {
          printf("not same");
     }
}