#include<stdio.h>
int main()
{
     int a,b;
     printf("enter a integer and no of rotations:\n");
     scanf("%d %d",&a,&b);
     for(int i=0;i<b;i++)
     {
          if((a>>0)&1)
          {
               a=a|(1<<31);
          }
          else
          {
               a=a&~(1<<31);
          }
          a=a>>1;
     }
     for(int i=31;i>=0;i--)
     {
          printf("%d",(a>>i)&1);
     }


}
