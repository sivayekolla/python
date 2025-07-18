#include<stdio.h>
#include<string.h>
void non_repeating(char *str)
{
    int len=strlen(str),i,j,flag=0;
    printf("non repeated chars are: ");
    for(i=0;i<len-1;i++)
    {
        flag=0;
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("%c ",str[i]);
            break;
        }
    }
}
int main()
{
    char str[20];
    printf("enter the string\n");
    scanf("%[^\n]",str);
    int size=strlen(str),start=0;
    non_repeating(str);
}