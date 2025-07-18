#include<stdio.h>
int main()
{
     int a;
     printf("enter a number:\n");
     scanf("%d",&a);
     if((a>>7)&1)
     {
          printf("lsb of %d is set for 8 bits",a);
     }
     else
     {
         printf("lsb of %d is not set for 8th bit",a); 
     }
}