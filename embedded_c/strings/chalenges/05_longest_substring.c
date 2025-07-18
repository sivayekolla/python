#include<stdio.h>
#include<string.h>
void longest_substring(char *str)
{
   int freq[256],len=strlen(str);
   int i,start=0,maxlen=0,maxstart=0;
   for(i=0;i<256;i++)
   {
    freq[i]=-1;
   }
   for(i=0;i<len;i++)
   {
        if(freq[str[i]]!=-1 && freq[str[i]]>=start)
        {
           start=freq[str[i]];
        }
        freq[str[i]]=i;
        if(i-start+1>maxlen)
        {
            maxlen=i-start+1;
            maxstart=start;
        }
   }
   for(i=0;i<maxlen;i++)
   {
        printf("%c",str[maxstart+i]);
   }
}
int main()
{
    char str[20];
    printf("enter the string\n");
    scanf("%s",str);
    longest_substring(str);
}