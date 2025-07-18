#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *readfromfile(const char *filename)
{
    FILE *fp;
    char *p=NULL;
    fp=fopen(filename,"r");
	fseek(fp,0,2);
	long long int size=ftell(fp);
	rewind(fp);
	p=calloc(size+1,1);
	fread(p,1,size,fp);
    p[size] = '\0';
	fclose(fp);
	return p;
}
char *replace(char *str,char *str1,char *str2)
{
    long long int l1,l2,i;
	char *p=NULL;
	l1=strlen(str1);
	l2=strlen(str2);
	p=str;
	while(p=strstr(p,str1))
	{	
        int tail_len = strlen(p + l1); 
        if (l2 > l1)
        {
            long long int  new_len = strlen(str) + (l2 - l1) + 1;
            str = realloc(str, new_len);
            p = str + (p - str); 
        }
        memmove(p + l2, p + l1, tail_len + 1); 
        memcpy(p, str2, l2);

        p += l2; 
	}
	return str;

}
void writetofile(char *str,char *filename)
{
	FILE *fp;
	fp=fopen(filename,"w");
	fwrite(str,1,strlen(str),fp);
	fclose(fp);
}

int main()
{
    char *str=NULL;
    str=readfromfile("log_session.txt");
    str=replace(str,"New Step","NONStep");
    writetofile(str,"log_session.txt");
}