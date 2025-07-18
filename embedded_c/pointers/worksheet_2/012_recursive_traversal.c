#include<stdio.h>
#include<string.h>
void reverse(char *start,char *end)
{
    if(start<end)
    {
        char ch=*start;
        *start=*end;
        *end=ch;
        reverse(++start,--end);
    }

}
int main()
{
    char str[20];
    printf("enter the string\n");
    scanf("%s",str);
    int size=strlen(str)-1;
    char *ptr=str,*end=str+size;
    reverse(ptr,end);
    printf("%s",str);
}