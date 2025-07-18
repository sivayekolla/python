#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *readfromfile(char *file)
{
    char *p=NULL;
    FILE *fp;
    fp=fopen(file,"r");
    if(fp==NULL)
    {
        printf("file not exist");
        return NULL;
    }
    fseek(fp,0,SEEK_END);
    long long size=ftell(fp);
    p=calloc(size,1);
    rewind(fp);
    fread(p,1,size,fp);
    return p;
}
void *convert(char *str)
{
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]^=32;
        }
    }
}
void writetofile(char *str,char *file)
{
    FILE *fp;
    fp=fopen(file,"w");
    if(fp==NULL)
    {
        printf("file not created:");
        return;
    }
    fwrite(str,1,strlen(str)+1,fp);
}
int main()
{
    char *str;
    str=readfromfile("lines.txt");
    convert(str);
    writetofile(str,"lines.txt");
}