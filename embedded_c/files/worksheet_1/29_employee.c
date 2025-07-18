#include<stdio.h>
typedef struct employee{
    char name[20];
    int age;
}emp;
int main()
{
    FILE *fp;
    fp=fopen("employees.txt","w");
    if(fp==NULL)
    {
        printf("file not created");
        return 0;
    }
    int n;
    printf("how many employees data you want to update");
    scanf(" %d",&n);
    emp st[n];
    for(int i=0;i<n;i++)
    {
        printf("enter name and age of %d",i+1);
        scanf("%19s%d",st[i].name,&st[i].age);
    }
    for(int i=0;i<n;i++)
    {
        fprintf(fp,"NAME:%s  AGE:%d\n",st[i].name,st[i].age);
    }
    fclose(fp);
}