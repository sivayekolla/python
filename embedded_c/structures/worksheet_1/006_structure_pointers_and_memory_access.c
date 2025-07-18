#include<stdio.h>
#include<stdlib.h>
struct stu
{
     int a;
     int b;     
};
int main()
{
     
     struct stu *an1=(struct stu*)malloc(sizeof(struct stu));
     printf("enter values:\n");
     scanf("%d %d",&an1->a,&an1->b);
     printf("%d %d",an1->a,an1->b);
    // struct stu *an=NULL;
    // printf("%d",*(an));//segmentation fault
}