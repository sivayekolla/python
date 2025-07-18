#include<stdio.h>
#define SETBIT(a,b) a=a|(1<<b)
#define CLEARBIT(a,b) a=a &~(1<<b)
#define togglebit(a,b) a=a^(1<<b)

int main()
{
     int a,b;
     printf("enter value and to perform bit operations:");
     scanf("%d %d",&a,&b);
     int c = SETBIT(a,b);
     int d=CLEARBIT(a,b);
     int e=togglebit(a,b);
     printf("%d %d %d\n",c,d,e); 
}