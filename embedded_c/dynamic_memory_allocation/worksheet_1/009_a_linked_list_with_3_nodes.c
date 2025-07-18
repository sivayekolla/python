#include<stdio.h>
#include<stdlib.h>
struct stu
{
     int a;
     struct stu *link;
};
int main()
{
     int p;
     printf("enter no of nodes:\n");
     scanf("%d",&p);
     struct stu *head=malloc(sizeof(struct stu));
     head->link=NULL;
     struct stu *temp=malloc(sizeof(struct stu));
     temp=head;
     for(int i=0;i<p;i++)
     {
         struct stu *new=malloc(sizeof(struct stu));
         new->link=NULL;
         printf("enter value to node:\n");
         scanf("%d",&new->a);
         temp->link=new;
         temp=new;
     }
     temp=head->link;
     printf("values are:\n");
     for(int i=0;i<p;i++)
     {
          printf("%d\n",temp->a);
          temp=temp->link;
     }
     temp=head->link;
     struct stu *next;
     for(int i=0;i<p;i++)
     {
          next=temp->link;
         free(temp);
          temp=next;
     }

}