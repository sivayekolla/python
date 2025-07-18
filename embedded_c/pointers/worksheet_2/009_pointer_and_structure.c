#include<stdio.h>
#include<stdlib.h>
struct stu
{
     int a;
     int b;
};
int main()
{
     struct stu amp={10,100};
     struct stu amp1={20,200};
     struct stu *ump=&amp;
     struct stu * ump1=&amp1;
     ump->a=ump->a+20;
     ump1->b=ump1->b+74;
     printf("%d %d\n",ump->a,ump->b);
     printf("%d %d\n",ump1->a,ump1->b);
}