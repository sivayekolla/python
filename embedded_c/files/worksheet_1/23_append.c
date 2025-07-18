#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp2=fopen("a.txt","r");
    char *str;
    fseek(fp2,0,SEEK_END);
    long long int size=ftell(fp2);
    rewind(fp2);
    str=calloc(size+1,1);
    fread(str,1,size,fp2);
    fp1=fopen("b.txt","a");
    fputs(str,fp1);
}