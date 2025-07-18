#include<stdio.h>
#include<string.h>
void remove_dups(char *str)
{
    int len=strlen(str),i,j=0;
    char freq[256]={0};
    for(i=0;i<len;i++)
    {
        if(freq[str[i]]==0)
        {
            str[j++]=str[i];
            freq[str[i]]++;
        }
    }
    str[j]='\0';
}
int main()
{
    char str[20];
    printf("enter the string\n");
    scanf("%[^\n]",str);
    remove_dups(str);
    printf("%s",str);
}
