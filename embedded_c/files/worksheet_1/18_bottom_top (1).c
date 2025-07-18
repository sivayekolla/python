#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("lines.txt","r");
    if(fp==NULL)
    {
        printf("file not exist");
        return 1;
    }
    char str[20][100];
    int i=0,cnt=0;
    while(fgets(str[cnt],sizeof(str[cnt]),fp)!=NULL) cnt++;
    for(i=cnt-1;i>=0;i--)
    {
        printf("%s",str[i]);
    }

}