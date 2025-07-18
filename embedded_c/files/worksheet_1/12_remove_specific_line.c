#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("lines.txt","r");
    if(fp1==NULL)
    {
        printf("file not existed:");
        return 1;
    }
    fp2=fopen("linex.txt","w");
    if(fp2==NULL)
    {
        printf("file not created:");
        return 1;
    }
    int line,linecnt=0;
    printf("enter line no:");
    scanf("%d",&line);
    getchar();
    char str[100];
    while(fgets(str,sizeof(str),fp1)!=NULL)
    {
        linecnt++;
        if(linecnt==line)
        {
            continue;
        }
        fputs(str,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    char const *file="lines.txt";
    if(remove(file)==0)
    {
        printf("file deletd");
    }
    else{
        printf("file not deleted");
    }
    printf("%d th line was remove",line);
    rename("linex.txt","lines.txt");
}