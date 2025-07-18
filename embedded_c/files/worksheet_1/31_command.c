#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    FILE *fp;
    fp=fopen("answer.txt","w");
    if(fp==NULL)
    {
        printf("file not created:");
        return 1;
    }
    int sum=atoi(argv[1])+atoi(argv[2])+atoi(argv[3]);
    char buffer[20];
    sprintf(buffer,"%d",sum);
    fputs(buffer,fp);
    fclose(fp);
}