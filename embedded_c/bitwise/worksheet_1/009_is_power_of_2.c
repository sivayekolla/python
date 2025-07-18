#include<stdio.h>
int main()
{
     int a,found=0;
     printf("enter a number to check if power of 2:\n");
     scanf("%d",&a);
     for(int i=0;i<32;i++)
     {
          int r=0;
          r=r|(1<<i);
          if(a==r)
          {
               
               found=1;
               break;
          }
     }
     if(found)
     {
          printf("%d is power of 2",a);
     }
     else
     {
          printf("%d is not a power of 2",a);
     }

}