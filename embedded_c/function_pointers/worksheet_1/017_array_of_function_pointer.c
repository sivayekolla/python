#include<stdio.h>
int add(int a,int b)
{
     printf("%d",a+b);
     return 0;
}
int sub(int a,int b)
{
     printf("%d",a-b);
     return 0;
}
int mul(int a,int b)
{
    printf("%d",a*b);
     return 0;
}
int div(int a,int b)
{
     printf("%d",a/b);
     return 0;
}
int mod(int a,int b)
{
     printf("%d",a%b);
     return 0;
}


int main()
{
     int a,b,m;
     printf("choose a operation:\n");
     printf("1.addition\n2.subtration\n3.multiplication\n4.divsion\n5.modulo\n");
     scanf("%d",&m);
     printf("enter 2 value:\n");
     scanf("%d %d",&a,&b);
     switch(m)
     {
          case 1:
               add(a,b);
               break;
          case 2:
               sub(a,b);
               break;
          case 3:
               mul(a,b);
               break;
          case 4:
               div(a,b);
               break;
          case 5:
               mod(a,b);
               break;
     }
}