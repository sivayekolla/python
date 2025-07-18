#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("lines.txt","r");
    if(fp==NULL)
    {
        printf("file not existed");
        return 1;
    }
    char str[100];
    int cnt=0;
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        if(strchr(str,'\n')!=NULL)
        {
            cnt++;
        }
    }
    printf("no of lines in lines.txt is %d",cnt);
}