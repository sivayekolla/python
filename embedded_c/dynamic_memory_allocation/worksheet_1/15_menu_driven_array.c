#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=NULL,i=0;
    char ch;
    while(1)
    {
        printf("\na-add,d-display,e-exit");
        scanf(" %c",&ch);
        switch(ch)
        {
            case 'a':ptr=realloc(ptr,sizeof(int)*i+1);
                printf("enter element");
                scanf("%d",&ptr[i]);
                break;
            case 'd':
                    printf("elements: ");
                    for(int j=0;j<i;j++)
                    {
                        printf("%d ",ptr[j]);
                    }
                    break;
            case 'e':free(ptr);
                    return 0;
        }
    }
}