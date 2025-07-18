#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int *ptr=calloc(100,sizeof(int));
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int i;
    int*arr=malloc(n*sizeof(int));
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%99+1;
    }
    for(i=0;i<n;i++)
    {
        ptr[arr[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if(ptr[i]>0)
        {
            printf("freq of %d is %d\n",i,ptr[i]);
        }
    }
}