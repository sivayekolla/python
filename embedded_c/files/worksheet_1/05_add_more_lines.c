#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("lines.txt","a+");
    if(fp==NULL)
    {
        printf("file not existed");
        return 1;
    }
    int len;
    printf("how many lines do you want to add:");
    scanf("%d",&len);
    getchar();
    int i;
    for(i=0;i<len;i++)
    {
        char str[20];
        printf("enter line:");
        fgets(str,sizeof(str),stdin);
        //str[strcspn(str, "\n")] = '\0';
        fputs(str,fp);
    }
    char str[50];
    printf("now file contains:");
    fseek(fp,0,SEEK_SET);
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
    }
    fclose(fp);
}