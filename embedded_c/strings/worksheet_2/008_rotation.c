#include<stdio.h>
#include<string.h>
void check_rotate(char *str1,char *str2)
{
    char str3[40];
    int len=strlen(str1);
    strcpy(str3,str1);
    strcpy(str3+strlen(str1),str1);
    int size1=strlen(str3),i;
    for(i=0;i<size1;i++)
    {
        if(strncmp(str3+i,str2,len)==0)
        {
            printf("yes");
            return;
        }
    }
    printf("NO");
}
int main()
{
    char str[20];
    printf("string:");
    scanf("%s",str);
    char str2[20];
    printf("second string:");
    scanf("%s",str2);
    int size1=strlen(str),i;
    check_rotate(str,str2);
}