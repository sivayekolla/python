#include<stdio.h>
#include<stdarg.h>
#include<limits.h>
#include<stdlib.h>
int *max_min(int count,...)
{
    va_list args;
    va_start(args,count);
    int max=INT_MIN,min=INT_MAX;
    int i=0;
    while(i<count)
    {
        int a=va_arg(args,int);
        if(a>max)
        {
            max=a;
        }
        if(a<min)
        {
            min=a;
        }
        i++;
    }
    int *arr=malloc(2*sizeof(arr));
    arr[0]=max;
    arr[1]=min;
    va_end(args);
    return arr;
}
int main()
{   
    int *arr=max_min(5,3,5,9,0,7);
    printf("max:%d min:%d",arr[0],arr[1]);
}