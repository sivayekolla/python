#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=malloc(sizeof(int)*10);
    for(int i=0;i<10;i++)
    {
        scanf("%d",ptr+i);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",ptr[i]);
    }
}