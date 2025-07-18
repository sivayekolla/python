#include<stdio.h>
#include<string.h>
int palindrome(char *str,int i,int j)
{
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
void longestpalindrome(char *str)
{
    int i,j,len=strlen(str);
    int maxlen=0,start=0;
    for(i=0;i<len;i++)
    {
        for(j=i;j<len;j++)
        {
            if(palindrome(str,i,j) && (j-i+1>maxlen))
            {
                start=i;
                maxlen=j-i+1;
            }
        }
    }
    printf("longest palindromic substring:");
    for(i=start;i<start+maxlen;i++)
    {
        printf("%c",str[i]);
    }
}
int main()
{
    char str[20];
    printf("enter the string\n");
    scanf("%s",str);
    longestpalindrome(str);
    return 0;
}