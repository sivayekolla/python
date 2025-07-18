#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    fp=fopen("lines.txt","r");
    if(fp==NULL)
    {
        printf("file not existed:");
        return 1;
    }
    char str[100];
    int wordcnt=0,charcnt=0,linecnt=0,i=0;
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        linecnt++;
        i=0;
        int inWord=0;
        while (str[i] != '\0')
        {
            if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
            {
                charcnt++;
                if (!inWord)
                {
                    inWord = 1;
                    wordcnt++;
                }
            }
            else
            {
                inWord = 0;
            }
            i++;
        }
    }
    printf("no of lines:%d\n",linecnt);
    printf("no of words:%d\n",wordcnt);
    printf("no of characters:%d",charcnt);
}