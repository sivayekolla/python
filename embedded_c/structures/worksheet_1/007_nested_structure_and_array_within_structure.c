#include<stdio.h>
#include<stdlib.h>
typedef struct stum 
{
     int *c[10];
     int d;
}ump1;
typedef struct stu
{
     int a;
     int b;
     ump1 namp;
}ump;
int main()
{
     ump name1;
     scanf("%d %d %d ",&name1.a,&name1.b,&name1.namp.d);
     printf("%d %d %d ",name1.a,name1.b,name1.namp.d);
     for(int i=0;i<10;i++)
     {
          name1.namp.c[i]=malloc(sizeof(int));
          scanf("%d",&name1.namp.c[i]);
     }
     for(int i=0;i<10;i++)
     {
          printf("%d",*(name1.namp.c[i]));
     }
}