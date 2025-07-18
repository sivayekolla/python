#include<stdio.h>
#include<string.h>
#include<limits.h>
int check(char *str1,int i,int j,char *str2)
{
    int freqa[256];
    int freqb[256];
    for(int k=0;k<256;k++)
    {
        freqa[k]=-1;
        freqb[k]=-1;
    }
    for(int k=i;k<j;k++)
    {
        freqa[str1[k]]++;
    }
    for(int k=0;k<strlen(str2);k++)
    {
        freqb[str1[k]]++;
    }
    int flag=0;
    for(int k=0;k<strlen(str2);k++)
    {
        flag=0;
        for(int l=i;l<j;l++)
        {
            if(str1[k]==str2[l])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            return 0;
        }
    }
    return 1;
}
void findsmallest(char *str1,char *str2)
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    int i,j,minlen=INT_MIN,start=-1;
    for(i=0;i<len1;i++)
    {
        for(j=i;j<len1;j++)
        {
            if(check(str1,i,j,str2))
            {
                int len=j-i+1;
                if(len<minlen)
                {
                    minlen=len;
                    start=i;
                }
                break;
            }
        }
    }
    if(start==-1)
    {
        printf("no such string exist");
    }
    else{
        printf("smallest string: ");
        for(i=start;i<start+minlen;i++)
        {
            printf("%c",str1[i]);
        }
    }
}
int main()
{
    char str[20];
    printf("enter the string\n");
    scanf("%[^\n]",str);
    char str2[20];
    printf("enter the string2\n");
    scanf("%s",str2);
    findsmallest(str,str2);
    return 0;
}