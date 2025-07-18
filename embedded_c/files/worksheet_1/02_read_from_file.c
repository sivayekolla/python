#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("file is not existed\n");
        return 1;
    }
    char str[50];
    fgets(str,sizeof(str),fp);
    printf("%s \nis read from file",str);
    fclose(fp);
}