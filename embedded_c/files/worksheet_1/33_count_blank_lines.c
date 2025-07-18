#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("log_session.txt","r");
    if(fp==NULL)
    {
        printf("file not created:");
        return 1;
    }
    char str[100];
    int cnt=0;
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        if(str[0]=='\n')
        {
            cnt++;
        }
    }
    printf(" Blank lines: %d",cnt);
    fclose(fp);
}