#include<stdio.h>
#include<string.h>
void rotation(char *str,char *sub)
{
    char arr[40];
    strcpy(arr,str);
    strcat(arr,str);
    for(int i=0;i<strlen(arr);i++)
    {
        if((strncmp(arr+i,sub,strlen(sub)))==0)
        {
            printf("true");
            return;
        }
    }
     printf("false");
}
int main()
{
    char str[20];
    printf("enter the string\n");
    scanf("%s",str);
    char sub[20];
    printf("enter the sub string\n");
    scanf("%s",sub);
    rotation(str,sub);
}