#include<stdio.h>
int main()
{
     int a;
     printf("enter the value:\n");
     scanf("%d",&a);
     for(int i=0;i<32;i++)
     {
          int v= (1<<i);
          if(a==v)
          {
               printf("%d :is position",i);
          }
          if(v>a)
          {
               printf("not a value of power of 2");
               break;
          }
     }
}