#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stu
{
     int data;
     struct stu *link;
};
int main()
{
     int a,b;
     printf("enter a value for no of nodes:\n");
     printf("enter rotations :\n");
     scanf("%d %d",&a,&b);
     struct stu *head=(struct stu*)malloc(sizeof(struct stu));
     head->link=NULL;
     struct stu *temp=head;
     printf("enter values:\n");
     for(int i=0;i<a;i++)
     {
          struct stu *new=(struct stu*)malloc(sizeof(struct stu));
          scanf("%d",&new->data);
          new->link=NULL;
          temp->link=new;
          temp=new;
     }
     head=head->link;
     b=b%a;
     if(b==0)
     {
          temp=head;
          for(int i=0;i<a;i++)
          {
               printf("%d\t",temp->data);
               temp=temp->link;
          }
          return 0;
     }
     struct stu *temp1=head;
     for(int i=1;i<b;i++)
     {
          temp1=temp1->link;
     }
     struct stu *new_head=temp1->link;
     temp1->link=NULL;
     struct stu *last=new_head;
     while(last->link!=NULL)
     {
          last=last->link;
     }
     last->link=head;
     temp=new_head;
     for(int i=0;i<a;i++)
     {
          printf("%d\t",temp->data);
          temp=temp->link;
     }
}
