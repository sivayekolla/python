#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * fun(char *str)
{
    int len=strlen(str),i=0;
    char *s=malloc(sizeof(char)*len);
    while(i<len)
    {
        s[i]=str[i];
        i++;
    }
    s[i]='\0';
    return s;
}
int main()
{
    char str[20];
    printf("enter string:");
    scanf("%[^\n]",&str);
    char *s=fun(str);
    printf("s:%s",s);
    free(s);
}