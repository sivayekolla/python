#include<stdio.h>
int main()
{
     int a,b,c,d,e;
     printf("enter a number and 2 bit positions:\n");
     scanf("%d %d %d",&a,&b,&c);
     if((a>>b)&1)
     {
           d=1;

     
     }
     else
     {
     d=0;
     }
     if((a>>c)&1)
     {
          e=1;
     }
     else
     {
     e=0;
     }

     if(d)
     {
          a=a|(1<<c);
     }
     else
     {
          a=a&~(1<<c);
     }
     if(e)
     {
          a=a|(1<<b);
     }
     else
     {
          a=a&~(1<<b);
     }
     



     for(int i=31;i>=0;i--)
     {
          printf("%d",(a>>i)&1);
     }
}