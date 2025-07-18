#include<stdio.h>
int add(int a,int b)
{
     return a+b;
}
int sub(int a,int b)
{
     return a-b;
}
int mul(int a,int b)
{
     return a*b;
}
int div(int a,int b)
{
     return a/b;
}


int main()
{
     int a,b,b0=0;
     printf("enter 2 value:\n");
     scanf("%d %d",&a,&b);
     int(*app[4])()={add,sub,mul,div};
     for(int i=0;i<4;i++)
     {
           b0=app[i](a,b);
          printf("%d\n",b0);
     }

}