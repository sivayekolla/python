#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
int main()
{
    char str[50];
    char *words[max];
    int count=0,i;
    printf("enter string:");
    scanf("%[^\n]",str);
    char *token=strtok(str," ");
    while(token!=NULL && count<max)
    {
        words[count] = malloc(strlen(token)+1);
        if(words[count]==NULL)
        {
            printf("memory allocation failed\n");
            return 1;
        }
        strcpy(words[count],token);
        count++;
        token=strtok(NULL," ");
    }
    for(i=0;i<count;i++)
    {
        printf("%s\n",words[i]);
    }
    for(i=0;i<count;i++)
    {
        free(words[i]);
    }
}