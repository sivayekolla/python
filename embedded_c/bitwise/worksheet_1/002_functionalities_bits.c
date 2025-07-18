#include<stdio.h>
void set_lsb(int a)
{
     a=a|(1<<1);
     printf("%d",a);
}
void clear_lsb(int a)
{
     a=a&~(1<<1);
     printf("%d",a);
}
void toggle_lsb(int a)
{
     a=a^(1<<31);
     printf("%d",a);
}
void set_msb(int a)
{
     a=a|(1<<31);
     printf("%d",a);
}
void clear_msb(int a)
{
     a=a&~(1<<31);
     printf("%d",a);
}
void toggle_msb(int a)
{
     a=a^(1<<1);
     printf("%d",a);
}
void at_specific_set(int a,int b)
{
     a=a|(1<<b);
     printf("%d",a);
}
void at_specific_clear(int a,int b)
{
     a=a&~(1<<b);
     printf("%d",a);
}
void at_specific_toggle(int a,int b)
{
     a=a^(1<<b);
     printf("%d",a);
}


int main()
{
     int i,o;
     printf("enter a number to set,clear,toggle at specific location\n");
     printf("enter a number:\n");
     scanf("%d %d",&i,&o);  
set_lsb( i);

clear_lsb( i);

toggle_lsb( i);

set_msb( i);

clear_msb( i);

toggle_msb( i);

at_specific_set( i, o);

at_specific_clear( i, o);

at_specific_toggle( i, o);

     
       
}
