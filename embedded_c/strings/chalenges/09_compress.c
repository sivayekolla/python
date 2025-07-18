#include<stdio.h>
#include<string.h>
void compress(char *str)
{
    int i,len=strlen(str);
    int j=0,cnt=0;
    for(i=1;i<len;i++)
    {
        if(str[i]==str[i-1])
        {
            cnt++;
        }
        else{
            str[j++]=str[i-1];
            str[j++]='0'+cnt;
            cnt=0;
        }
    }
    if(str[i]=='\0')
    {
        str[j++]=str[i-1];
        str[j++]='0'+cnt;
    }
    str[j]='\0';
}
int main()
{
    char str[20];
    printf("enter the string\n");
    scanf("%s",str);
    compress(str);
    printf("%s",str);
}