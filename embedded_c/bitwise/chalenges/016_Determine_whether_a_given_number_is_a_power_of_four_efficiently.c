#include<stdio.h>
#include<math.h>
int main()
{
     int a,b=0,i=1;
     printf("enter a nuber:\n");
     scanf("%d",&a);
     while(i>0)
     {
          b=pow(4,i);
          if(b>a)
          {
               printf("no not power of 4");
               break;
          }
          if(a==b)
          {
               printf("%d : is the power of 4",a);
               break;
          }
          i++;
     }
}