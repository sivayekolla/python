#include<stdio.h>
#include<string.h>
int main()
{
char data[] = "12345";
memmove(data + 2, data, 3); 
printf("%s",data);
}