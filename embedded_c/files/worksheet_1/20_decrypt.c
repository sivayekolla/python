#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("secret.txt","r");
    char str[20];
    fgets(str,sizeof(str),fp);
    for(int i=0;i<strlen(str);i++)
    {
        str[i]-=3;
    }
    printf("%s",str);
}