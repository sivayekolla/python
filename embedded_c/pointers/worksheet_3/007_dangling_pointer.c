#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr= (int *)malloc(10 * sizeof(int));
    if(ptr==NULL)
    {
        printf("memory allocation falied\n");
        return 1;
    }
    for(int i=0;i<10;i++)
    {
        ptr[i]=i*2;
    }
    printf("Values before free:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    printf("Values after free:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}