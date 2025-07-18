#include<stdio.h>
int main()
{
     int a,b;
     printf("enter a number and rotations:\n");
     scanf("%d %d",&a,&b);
     for(int i=0;i<b;i++)
     {
          if((a>>i)&1)
          {
               a=a|(1<<(31-i));
               a=a>>1;
          }
          else
          {
               a=a &~(1<<(31-i));
               a=a>>1;
          }
     }
     for(int i=31;i>=0;i--)
     printf("%d",(a>>i)&1);


}