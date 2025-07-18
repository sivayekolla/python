#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("lines.txt","w");
    if(fp==NULL)
    {
        printf("file not created");
        return 1;
    }
    int lines;
    printf("how many lines:");
    scanf("%d",&lines);
    getchar();
    for(int i=0;i<lines;i++)
    {
       char str[20];
       printf("enter line%d:",i+1);
       fgets(str,sizeof(str),stdin);
       fputs(str,fp); 
    }
    if(fp!=NULL)
        printf("All lines saved in 'lines.txt'.");
    fclose(fp);
}