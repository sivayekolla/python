#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("lines.txt","r");
    if(fp==NULL)
    {
        printf("file not existed:");
        return 1;
    }
    char str[100];
    int lin=0;
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        lin++;
        printf("%s",str);

    }
    printf("no of lines are %d",lin);
}