#include<stdio.h>
#include<string.h>
int check(char ch,char *dup)
{
    int size=strlen(dup);
    for(int i=0;i<size;i++)
    {
        if(dup[i]==ch)
        {
            return 1;
        }
    }
    return 0;
}
void count(char *str)
{
    int i,size=strlen(str),k=0;
    char freq[256]={0};
    char *dup;
    for(i=0;i<size;i++)
    {
        freq[str[i]]++;
    }
    for(i=0;i<size;i++)
    {
        if(check(str[i],dup))
        {
            continue;
        }
        else{
            printf("%c=%d\n",str[i],freq[str[i]]);
            dup[k++]=str[i];
        }
    }
}
int main()
{
    char str[20];
    printf("enter the string\n");
    scanf("%s",str);
    count(str);
}