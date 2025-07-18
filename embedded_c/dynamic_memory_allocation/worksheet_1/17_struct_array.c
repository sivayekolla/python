#include<stdio.h>
#include<stdlib.h>
struct person
{
    char name[20];
    int age;
};

int main()
{
    int n;
    printf("how many n:");
    scanf("%d",&n);
    struct person *members=malloc(sizeof(struct person)*n);
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter name:");
        scanf("%s",(members+i)->name);
        printf("enter age:");
        scanf("%d",&(members+i)->age);
    }
    for(i=0;i<n;i++)
    {
        printf("%s %d\n",(members+i)->name,(members+i)->age);
    }
    free(members);
}