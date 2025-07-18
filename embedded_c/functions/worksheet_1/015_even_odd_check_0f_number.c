#include<stdio.h>
int even_odd(int b);
int main()
{
     int a;
     printf("enter a value:\n");
     scanf("%d",&a);
     int v=even_odd(a);
     if(v)
     {
          printf("%d:is a odd",a);
     }
     else
     {
           printf("%d:is a even",a);
     }

}
int even_odd(int b)
{
     
     if(b&1)
     {
          return 1;
     }
     else
     {
          return 0;
     }
}