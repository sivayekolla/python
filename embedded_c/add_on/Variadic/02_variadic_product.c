#include<stdio.h>
#include<stdarg.h>
int product(int count,...)
{
    va_list args;
    va_start(args,count);
    int p=1,i=0;
    while(i<count)
    {
        p=p*va_arg(args,int);
        i++;
    }
    va_end(args);
    return p;
}
int main()
{
    printf("%d\n",product(3,1,2,3));
    printf("%d\n",product(4,1,2,3,4));
    printf("%d",product(3,-1,-2,-3));
}