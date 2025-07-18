#include<stdio.h>
#include<stdlib.h>
#define max 5
typedef struct {
    char name[20];
    int age;
}person;
int comparebyname(const void *a, const void *b)
{
    return strcmp(((person *)a)->name, ((person *)b)->name);
}
int comparebyage(const void *a,const void *b)
{
   return ((person *)a)->age - ((person *)b)->age;
}
void display(person people[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("name:%s age:%d\n",people[i].name,people[i].age);
    }
}
int main()
{
    person people[max];
    int i;
    for(i=0;i<max;i++)
    {
        printf("enter name and age of person %d:",i+1);
        scanf("%s%d",people[i].name,&people[i].age);
    }
    qsort(people,max,sizeof(people[0]),comparebyname);
    display(people,max);
    qsort(people,max,sizeof(people[0]),comparebyage);
    display(people,max);
}