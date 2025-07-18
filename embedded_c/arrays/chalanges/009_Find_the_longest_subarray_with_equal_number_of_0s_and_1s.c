#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("enter no of elements:\n");
    scanf("%d",&a);
    int *arr=(int *)malloc(sizeof(int)*a);
    printf("enter elements (0s and 1s):\n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",arr+i);
        if(*(arr+i)==0) *(arr+i)=-1;
    }

    int size=2*a+1;
    int *map=(int *)malloc(sizeof(int)*size);
    for(int i=0;i<size;i++) *(map+i)=-2;

    int sum=0,maxlen=0;
    *(map+a)= -1;

    for(int i=0;i<a;i++)
    {
        sum += *(arr+i);
        if(*(map+sum+a)==-2)
        {
            *(map+sum+a)=i;
        }
        else
        {
            if(i-*(map+sum+a)>maxlen)
            {
                maxlen = i - *(map+sum+a);
            }
        }
    }

    printf("length of longest subarray with equal 0s and 1s is: %d\n",maxlen);
    free(arr);
    free(map);
}
