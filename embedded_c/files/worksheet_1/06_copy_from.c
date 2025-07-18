#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("lines.txt","r");
    fp2=fopen("copy.txt","w");
    if(fp1==NULL)
    {
        printf("lines.txt file not existed");
        return 1;
    }
    if(fp2==NULL)
    {
        printf("copy.txt file not created");
        return 1;
    }
    char str[100];
    while(fgets(str,sizeof(str),fp1)!=NULL)
    {
        fputs(str,fp2);
    }
    if(fp2!=NULL)
    {
        printf("File 'lines.txt' copied to 'copy.txt'.");
    }
}