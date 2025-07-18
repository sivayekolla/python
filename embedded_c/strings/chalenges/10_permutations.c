#include<stdio.h>
#include<string.h>
void sort(char *str)
{
    int i,j,len=strlen(str);
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(str[j]>str[j+1])
            {
            char ch=str[j];
            str[j]=str[j+1];
            str[j+1]=ch;
            }
        }
    }
}
void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
void reverse(char *str,int i,int j)
{
    while(i<j)
    {
        swap(&str[i],&str[j]);
        i++;
        j--;
    }
}
int permutation(char *str)
{
    int len=strlen(str);
    int i=len-2;
    while(i>=0 && str[i]>=str[i+1])
    {
        i--;
    }
    if(i<0)
    {
        return 0;
    }
    int j=len-1;
    while(str[j] <=str[i])
    {
        j--;
    }
    swap(&str[i],&str[j]);
    reverse(str,i+1,len-1);
    return 1;
}
int main()
{
    char str[20];
    printf("enter the string\n");
    scanf("%s",str);
    sort(str);
    do
    {
        printf("%s\n",str);
    } while (permutation(str));
}
    
