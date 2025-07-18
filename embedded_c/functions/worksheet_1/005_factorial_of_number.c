#include<stdio.h>
int fact(int b)
{
     
     if(b>0)
     {
          return b*fact(b-1);
          
     }
     else 
     return 1;
}
int main()
{
     int a;
     printf("enter a number to get factorial:\n");
     scanf("%d",&a);
     int c=fact(a);
     printf("%d",c);

}
