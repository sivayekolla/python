#include<stdio.h>
int main()
{
    FILE *fp1,*fp2,*fp;
    fp1=fopen("a.txt","r");
    fp2=fopen("b.txt","r");
    fp=fopen("joint.txt","w");
    char str[100][100];
    int cnt=0;
    while(fgets(str[cnt],sizeof(str[cnt]),fp1)!=NULL)
    {
        cnt++;
    }
    while(fgets(str[cnt],sizeof(str[cnt]),fp2)!=NULL)
    {
        cnt++;
    }
    for(int i=0;i<cnt;i++)
    {
        fputs(str[i],fp);
    }
}