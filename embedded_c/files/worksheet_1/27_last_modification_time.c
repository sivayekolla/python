#include<stdio.h>
#include<sys/stat.h>
int main()
{
    struct stat v;
    if(stat("lines.txt",&v)<0)
    {
        perror("stat");
        return 0;
    }
    printf("last modification time:%s\n",ctime(&v.st_mtime));
}