#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("lines.txt","r");
    long long int size;
    fseek(fp,0,SEEK_END);
    size=ftell(fp);
    rewind(fp);
    printf("size:%dbytes",size);
}