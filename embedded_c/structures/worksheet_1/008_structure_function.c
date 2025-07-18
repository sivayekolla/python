#include<stdio.h>
struct st
{
    int roll;
    char name[20];
};
void  getperson(struct st man)
{
    man.roll=61;
    strcpy(man.name,"vinod");
   
}
void modifyperson(struct st *man)
{
    man->roll=61;
    strcpy(man->name,"vinod");
}
int main()
{
    struct st person={23,"raju"};
    getperson(person);
    printf("call by value:\n");
    printf("roll:%d name:%s\n",person.roll,person.name);
    modifyperson(&person);
    printf("call by reference:\n");
    printf("roll:%d name:%s",person.roll,person.name);
}