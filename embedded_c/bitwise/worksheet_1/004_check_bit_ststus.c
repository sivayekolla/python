#include<stdio.h>
void check_lsb(int a)
{
     if(a%2)
     {
          printf("%d : lsb is set\n",a);
     }
     else
     {
          printf("%d: lsb is clear\n",a);
     }
}
void check_msb(int a)
{
     if((a>>31)&1)
     {
          printf("%d : msb is set\n",a);
     }
     else
     {
          printf("%d: msb is clear\n",a);
     }
}
void check_at_position(int a,int b)
{
     if((a>>b)&1)
     {
          printf("%d : at location bit is is set\n",a);
     }
     else
     {
          printf("%d: at location bit is clear\n",a);
     }
}
int main()
{
     int a,b;
     printf("enter bit no to check and of specific :\n");
     scanf("%d %d",&a,&b);
     check_lsb( a);
     check_msb( a);
     check_at_position( a, b);
     
}