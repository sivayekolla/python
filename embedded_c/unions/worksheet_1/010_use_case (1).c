#include<stdio.h>
struct employee
{
    union {
        float salary;
        float wage;
    };
    int type;
};
//type-0 for salary and type-1 for wage
int main()
{
    struct employee id[5];
    for(int i=0;i<5;i++)
    {
        printf("type-0 for salary and type-1 for wage :");
        scanf("%d",&id[i].type);
        if(id[i].type==0)
        {
            printf("enter salary for employee %d",i);
            scanf("%f",&id[i].salary);
        }
        else{
            printf("enter daily wage for employee %d",i);
            scanf("%f",&id[i].wage);
        }
    }
    for(int i=0;i<5;i++)
    {
        if(id[i].type==0)
        {
            printf("salary of %d:%f\n",i,id[i].salary);
        }
        else{
            printf("daily wage of %d:%f\n",i,id[i].wage);
        }
    }
}
