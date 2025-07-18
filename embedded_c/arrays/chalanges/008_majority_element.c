#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("enter no of elements:\n");
    scanf("%d",&a);
    int *arr=(int *)malloc(sizeof(int)*a);
    printf("enter elements:\n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",arr+i);
    }

    int count=0,candidate=0;
    for(int i=0;i<a;i++)
    {
        if(count==0)
        {
            candidate=*(arr+i);
            count=1;
        }
        else
        {
            count += (*(arr+i)==candidate) ? 1 : -1;
        }
    }

    count=0;
    for(int i=0;i<a;i++)
    {
        if(*(arr+i)==candidate)
        {
            count++;
        }
    }

    if(count > a/2)
    {
        printf("majority element is: %d\n",candidate);
    }
    else
    {
        printf("no majority element found\n");
    }

    free(arr);
}
