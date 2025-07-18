#include<stdio.h>
#include<stdarg.h>
float average(int count,...)
{
    va_list args;
    double res=0;
    va_start(args,count);
    for(int i=0;i<count;i++)
    {
        double val=va_arg(args,double);
        res+=val;
    }
    va_end(args);
    return res/count;
}
int main()
{
    printf("%f",average(4, 10.5, 30.2, 40.1, 20.6));
    return 0;
}