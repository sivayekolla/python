#include<stdio.h>
int main()
{
    FILE *fp,*fp2;
    fp=fopen("lines.txt","r");
    if(fp==NULL)
    {
        printf("file not created:");
        return 1;
    }
    fp2=fopen("linex.txt","w");
    int line,linecnt=0;
    printf("enter linre no:");
    scanf("%d",&line);
    getchar();
    char str[100],s[100];
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        linecnt++;
        if(linecnt==line)
        {
            
            printf("enter new name:");
            fgets(s,sizeof(s),stdin);
            fputs(s,fp2);
            continue;
        }
        fputs(str,fp2);
    }
    fclose(fp);
    fclose(fp2);
    remove("lines.txt");
    rename("linex.txt","lines.txt");
}