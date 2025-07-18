#include<stdio.h>
int prime(int b);
int main()
{
     int a;
     printf("enter a value:\n");
     scanf("%d",&a);
     int v=prime(a);
     if(v==1)
     {
          printf("%d:is a prime ",a);
     }
     else
     {
           printf("%d:is a not prime ",a);
     }

}
int prime(int b)
{
     int count=0;
     for(int i=1;i<b;i++)
     {
          if(b%i==0)
          {
               count++;
          }
     }
     if(count==1)
     {
          return 1;
     }
     else
     {
          return 0;
     }
}