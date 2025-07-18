#include<string.h>
#include<stdio.h>
void reverse(char *str,int i,int j)
{
    while(i<j)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    char str[20];
    printf("enter the string\n");
    scanf("%[^\n]",str);
    int size=strlen(str),start=0;
    reverse(str,0,size-1);
    printf("%s\n",str);
}