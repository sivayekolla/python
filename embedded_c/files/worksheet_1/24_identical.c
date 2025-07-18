#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("a.txt","r");
    fp2=fopen("b.txt","r");
    long long int len1,len2;
    fseek(fp1,0,2);
    len1=ftell(fp1);
    rewind(fp1);
    char *str1=calloc(len1+1,1);
    fread(str1,1,len1,fp1);
    fseek(fp2,0,2);
    len2=ftell(fp2);
    rewind(fp2);
    char *str2=calloc(len2+1,1);
    fread(str2,1,len2,fp2);
    if(len1 != len2)
    {
        printf("not identical");
        return 1;
    }
    else{
        for(int i=0;i<len1;i++)
        {
            if(str1[i]!=str2[i])
            {
                printf("not identical");
                return 1;
            }
        }
    }
    printf("identical");
}