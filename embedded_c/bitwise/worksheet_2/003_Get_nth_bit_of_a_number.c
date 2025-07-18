#include<stdio.h>
int main()
{
     int a,b;
     printf("enter value and bit position to check\n");
     scanf("%d %d",&a,&b);
    if((a>>(b-1))&1)
     {
          printf(" 1 is  bit of %d at %d bit location",a,b);
     }
     else
     {
         printf(" 0 is  bit of %d at %d bit location",a,b);
     }
}