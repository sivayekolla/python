#include<stdio.h>
#include<math.h>

int sqr(int a)
{
    printf("%d",pow(a,2));
     return 0;
}
int power(int a,int b)
{
     printf("%d",pow(a,b));
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
     printf("1.power\n2.modulo\n3.square_root\n");
     scanf("%d",&m);
     printf("enter 2 value:\n");
     scanf("%d %d",&a,&b);
     switch(m)
     {
          case 1:
               power(a,b);
               break;
          case 2:
               mod(a,b);
               break;
          case 3:
               sqr(a);
               break;
          
     }
}