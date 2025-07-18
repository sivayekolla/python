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
     scanf("%d %d",&a,&b);
     struct stu *head=(struct stu*)malloc(sizeof(struct stu));
     head->link=NULL;
     struct stu *temp=head;
     for(int i=0;i<a;i++)
     {
          struct stu *new=(struct stu*)malloc(sizeof(struct stu));
          scanf("%d",&new->data);
          new->link=NULL;
          temp->link=new;
          temp=new;
     }
     head=head->link;
     if(b==0||head==NULL||head->link==NULL)
     {
          temp=head;
          while(temp!=NULL)
          {
               printf("%d\t",temp->data);
               temp=temp->link;
          }
          return 0;
     }
     struct stu *last=head;
     int len=1;
     while(last->link!=NULL)
     {
          last=last->link;
          len++;
     }
     b=b%len;
     if(b==0)
     {
          temp=head;
          while(temp!=NULL)
          {
               printf("%d\t",temp->data);
               temp=temp->link;
          }
          return 0;
     }
     struct stu *prev=NULL;
     temp=head;
     for(int i=0;i<b;i++)
     {
          prev=temp;
          temp=temp->link;
     }
     prev->link=NULL;
     last->link=head;
     head=temp;
     temp=head;
     while(temp!=NULL)
     {
          printf("%d\t",temp->data);
          temp=temp->link;
     }
     return 0;
}
