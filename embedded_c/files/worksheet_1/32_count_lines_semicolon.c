#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("log_session.txt","r");
    long long size;
    fseek(fp,0,SEEK_END);
    size=ftell(fp);
    rewind(fp);
    char *str;
    str=calloc(size+1,1);
    fread(str,1,size,fp);
    int cnt=0;
    for(int i=0;i<size;i++)
    {
        if(str[i]==';' && str[i+1]=='\n')
        {
            cnt++;
        }
    }
    printf("Lines ending with semicolon: %d",cnt);
    fclose(fp);
}