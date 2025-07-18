#include<stdlib.h>
#include<stdio.h>
void main()
{ 
        int *ptr=malloc(sizeof(int)*2);
        int i;
        printf("data :\n");
        for(i=0;i<2;i++){
                scanf("%d", &ptr[i]);
        }
        ptr=realloc(ptr, 5*sizeof(int));
        for(i=4;i>=0;i--)
        {
                ptr[i]=ptr[i-1];
        }
        for(i=0;i<3;i++)
        {
                scanf("%d", &ptr[i]); 
        }
        printf("5 data :\n");
        for(i=0;i<5;i++)
        {
                printf("%d ",ptr[i]);
        }
    
}