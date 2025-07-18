#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rows,cols,i,j;
    printf("enter rows and cols:");
    scanf("%d %d",&rows,&cols);
    int **ptr=(int **)malloc(sizeof(int*)*rows);
    if(ptr==NULL)
    {
        printf("memory not allocated\n");
        return 0;
    }
    for(i=0;i<rows;i++)
    {
        ptr[i]=malloc(sizeof(int)*cols);
    }
    printf("enter values for 2d array:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&ptr[i][j]);
        }
    }
    printf("matrix:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rows;i++)
    {
        free(*ptr);
    }
    free(ptr);
}