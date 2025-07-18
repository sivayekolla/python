#include<stdio.h>
int setbits(int q,int b,int c,int d)
{
     for(int i=0;i<b;i++)
     {
          q=q|(1<<c);
          c++;
     }
     return q;   
}
int main()
{
     int a,b,c,d;
     printf("enter no of bits to set\nstarting bit\nat position\nrightmostbits\n");
     scanf("%d %d %d %d",&a,&b,&c,&d);
     int g=setbits(a,b,c,d);
     printf("%d",g);
}
