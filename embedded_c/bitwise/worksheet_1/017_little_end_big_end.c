#include<stdio.h>
int main()
{
     unsigned int a=0x12345678;
     unsigned int b=((a&(0x000000ff)<<24)|(a&(0x0000ff00)<<8)|(a&(0x00ff0000)>>8) |(a&(0xff000000)>>24));
     printf("%x",b);

     
}