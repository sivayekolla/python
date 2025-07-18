#include<stdio.h>
#include<string.h>
int main()
{
     char a[100]="jhdjhkkjbcdbvf";
     char b[100];
     memcpy(b,a,10);
     printf("%s",b);
}