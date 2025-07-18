#include<stdio.h>
int main()
{
    int num;
    printf("enter the value\n");
    scanf("%d",&num);
    int pos;
    printf("enter the pos\n");
    scanf("%d",&pos);
    
    printf("set pos (OR) :%d\n",num|=(1<<pos));
    printf("clear pos (AND): %d\n",num &= ~(1<<pos));
    printf("toggle (XOR):%d",num^=(1<<pos));

}