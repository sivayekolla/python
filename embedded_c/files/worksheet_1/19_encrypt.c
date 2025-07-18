#include<stdio.h>
void encrypt(char *str)
{
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        str[i]+=3;
    }
}
int main()
{
    FILE *fp;
    fp=fopen("secret.txt","w");
    char str[20];
    printf("enter the password:");
    scanf("%s",str);
    getchar();
    encrypt(str);
    fputs(str,fp);
}