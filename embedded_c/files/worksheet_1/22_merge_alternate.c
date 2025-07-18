#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("a.txt","r");
    fp2=fopen("b.txt","r");
    char a[10][100],b[10][100];
    int i=0,j=0;
    while(fgets(a[i],sizeof(a[i]),fp1)!=NULL)
    {
        i++;
    }
    while(fgets(b[j],sizeof(b[j]),fp2)!=NULL)
    {
        j++;
    }
    FILE *fp=fopen("alternate.txt","w");
    int m=(i>j)?i:j;
    for(int k=0;k<m;k++)
    {
        fputs(a[k],fp);
        fputs(b[k],fp);
    }
}