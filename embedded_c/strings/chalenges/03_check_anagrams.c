#include<stdio.h>
#include<string.h>
void check_anagram(char *str1,char *str2)
{
    char freqa[256]={0},freqb[256]={0};
    int i,j,len1=strlen(str1),len2=strlen(str2);
    for(i=0;i<len1;i++)
    {
        freqa[str1[i]]++;
    }
    for(i=0;i<len2;i++)
    {
        freqb[str2[i]]++;
    }
    for(i=0;i<256;i++)
    {
        if(freqa[i]!=freqb[i])
        {
            printf("not anagrams");
            return;
        }
    }
    printf("anagrams");
}
int main()
{
    char str[20],str2[20];
    printf("enter the string\n");
    scanf("%[^\n]",str);
    printf("enter the string\n");
    scanf("%s",str2);
    int size=strlen(str),start=0;
    check_anagram(str,str2);
}