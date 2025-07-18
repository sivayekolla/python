#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","w");
    if(fptr==NULL)
    {
        printf("file is not created");
        return 1;
    }
    char str[50];
    printf("enter something into buffer\n");
    scanf("%[^\n]",str);
    if(fptr!=NULL)
    {
        fputs(str,fptr);
        fclose(fptr);
    }
}