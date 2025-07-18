#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,ele,pos;
    printf("enter the value of n");
    scanf("%d",&n);
    int arr[n+1],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("enter the value to insert\n");
    scanf("%d",&ele);
    printf("enter the pos");
    scanf("%d",&pos);
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }
    j=n-1;
    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=ele;
    for(i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
}