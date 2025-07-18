#include<stdio.h>
void set_lsb_byte(int a)
{
     unsigned int c=0x000000FF;
     a=a|c;
     printf("%d",a);
}
void set_msb__byte(int a)
{
     unsigned int c=0xFF000000;
     a=a|(c);
     printf("%d",a);
}
void set_lsb_nibble(int a)
{
     unsigned int c=0x000F;
     a=a|c;
     printf("%d",a);
}
void set_msb_nibble(int a)
{
     unsigned int c=0xF0000000;
     a=a|(c);
     printf("%d",a);
}
void set_n_bits(int a,int b)
{
     for(int i=0;i<b;i++)
     {
          a=a|(1<<i);
     }
     printf("%d",a);
}
void toggle_msb(int a,int b)
{
    for(int i=0;i<b;i++)
     {
          a=a&~(1<<i);
     }
     printf("%d",a);
}

void at_n_toggle(int a,int b)
{
     for(int i=0;i<b;i++)
     {
          a=a^(1<<i);
     }
     printf("%d",a);
}

int main()
{
     int i,o;
     printf("enter a number to set,clear,toggle at specific location\n");
     printf("enter a number:\n");
     scanf("%d %d",&i,&o);  
set_lsb_byte( i);
set_msb__byte(i);
set_lsb_nibble(i);
set_msb_nibble(i);
set_n_bits( i, o);
toggle_msb(i,o);
at_n_toggle( i,o);

}
