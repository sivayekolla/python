#include<stdio.h>
#include<string.h>
int check(char *dup,char ch)
{
    for(int i=0;i<strlen(dup);i++)
    {
        if(dup[i]==ch)
        {
            return 0;
        }
    }
    return 1;
}
int longest_sub(char *str)
{
    int i,j=0,len=strlen(str);
    int cnt=0,max=0;
    char dup[20]={0};
    for(i=0;i<len;i++)
    {
        if(check(dup,str[i])==1)
        {
            dup[j++]=str[i];
            dup[j]='\0';
            cnt++;
            if(cnt>max)
                max=cnt;
        }
        else
        {
            j=0;
            cnt=1;
            dup[0]=str[i];
            dup[1]='\0';
        }
    }
    return max;
}
int main()
{
    char str[20];
    printf("enter the stringg:");
    scanf("%s",str);
    int max=longest_sub(str);
    printf("max sub stin g without repeating chars is %d",max);
}