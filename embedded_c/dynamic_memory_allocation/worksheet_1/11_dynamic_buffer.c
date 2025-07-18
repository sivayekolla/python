#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str=malloc(sizeof(char)),ch;
    if(str==NULL)
    {
        printf("memory not allocated\n");
        return 0;
    }
    int i;
    printf("enter character:");
    do{
        str=realloc(str,sizeof(*str)+1);
        ch=getchar();
        str[i++]=ch;
    }while(ch!='\n');
    str[i-1]='\0';
    printf("string:%s",str);
}