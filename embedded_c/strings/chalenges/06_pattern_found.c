#include<stdio.h>
#include<string.h>
void pattern_found(char *str,char *sub)
{
    printf("Pattern found at indices: ");
    int i,len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(strncmp(str+i,sub,strlen(sub))==0)
        {
            printf("%d ",i);
        }
    }
    
}
int main()
{
    char str[20];
    printf("enter the string\n");
    scanf("%[^\n]",str);
    char sub[20];
    printf("enter the sub string\n");
    scanf("%s",sub);
    pattern_found(str,sub);
}