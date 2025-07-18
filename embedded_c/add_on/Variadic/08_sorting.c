#include<stdio.h>
#include<stdarg.h>
void sort(int *arr,int count)
{
    for(int i=0;i<count;i++)
    {
        for(int j=0;j<count-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void sort_numbers(int count,...)
{
    va_list args;
    int arr[count];
    va_start(args,count);
    for(int i=0;i<count;i++)
    {
        arr[i]=va_arg(args,int);
    }
    sort(arr,count);
    va_end(args);
    for(int i=0;i<count ;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    printf("first sort:");
    sort_numbers(5, 9, 5, 7, 1, 3);
    printf("second sort:");
    sort_numbers(3, 1, -2, 0);
}