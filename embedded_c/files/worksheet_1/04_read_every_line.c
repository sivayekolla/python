#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("lines.txt","r");
    if(fp==NULL)
    {
        printf("file not existed");
        return 1;
    }
    char str[20][100];
    int cnt=0;

    while(fgets(str[cnt],sizeof(str[cnt]),fp)!=NULL)
    {
        cnt++;
    }
    for(int i=0;i<cnt;i++)
    {
        printf("%s\n",str[i]);
    }
    fclose(fp);
}