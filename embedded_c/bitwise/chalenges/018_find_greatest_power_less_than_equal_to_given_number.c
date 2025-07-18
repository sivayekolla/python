#include<stdio.h>
int main()
{
     int a,b=0,c=0;
     printf("enter a number:\n");
     scanf("%d",&a);
     for(int i=0;i<32;i++)
     {
          b=(1<<i);
          if(a<=b)
          {
               c=i;
               break;
          }
     }
     printf("%d",c);
}
