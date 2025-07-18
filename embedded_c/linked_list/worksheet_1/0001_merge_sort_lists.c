#include<stdio.h>
#include<stdlib.h>
struct stu
{
     int data;
     struct stu *link;
};
int main()
{
     int a;
     printf("enter no of elements in each lists:\n");
     scanf("%d",&a);
     struct stu *head=(struct stu *)malloc(sizeof(struct stu));
     head->link=NULL;
     struct stu *head1=(struct stu *)malloc(sizeof(struct stu));
     head1->link=NULL;
     struct stu *temp=head;
     struct stu *temp1=head1;
     printf("enter value to list 1:\n");
     for(int i=0;i<a;i++)
     {
          struct stu *new=(struct stu *)malloc(sizeof(struct stu));
          new->link=NULL;
          scanf("%d",&new->data);
          temp->link=new;
          temp=new;
     }
     temp=head->link;
     printf("enter value to list 2:\n");
     for(int i=0;i<a;i++)
     {
          struct stu *new1=(struct stu *)malloc(sizeof(struct stu));
          new1->link=NULL;
          scanf("%d",&new1->data);
          temp1->link=new1;
          temp1=new1;
     }
     temp1=head1->link;
     struct stu *newJEN1=(struct stu *)malloc(sizeof(struct stu));
     struct stu *newJEN2;
     struct stu *PAVI=newJEN1;
     newJEN1->link=NULL;
     while(temp != NULL && temp1 != NULL)
     {
          newJEN2=(struct stu *)malloc(sizeof(struct stu));
          newJEN2->link=NULL;
          if(temp->data < temp1->data)
          {
               newJEN2->data=temp->data;
               newJEN1->link=newJEN2;
               newJEN1=newJEN2;
               temp=temp->link;
          }
          else if(temp1->data < temp->data)
          {
               newJEN2->data=temp1->data;
               newJEN1->link=newJEN2;
               newJEN1=newJEN2;
               temp1=temp1->link;
          }
          else
          {
               newJEN2->data = temp->data;
               newJEN1->link = newJEN2;
               newJEN1 = newJEN2;

               newJEN2 = (struct stu *)malloc(sizeof(struct stu));
               newJEN2->data = temp1->data;
               newJEN2->link = NULL;
               newJEN1->link = newJEN2;
               newJEN1 = newJEN2;

               temp = temp->link;
               temp1 = temp1->link;
          }
     }
     while(temp != NULL)
     {
          newJEN2=(struct stu *)malloc(sizeof(struct stu));
          newJEN2->link=NULL;
          newJEN2->data=temp->data;
          newJEN1->link=newJEN2;
          newJEN1=newJEN2;
          temp=temp->link;
     }
     while(temp1 != NULL)
     {
          newJEN2=(struct stu *)malloc(sizeof(struct stu));
          newJEN2->link=NULL;
          newJEN2->data=temp1->data;
          newJEN1->link=newJEN2;
          newJEN1=newJEN2;
          temp1=temp1->link;
     }
     newJEN2 = PAVI->link;
     while(newJEN2 != NULL)
     {
          printf("%d\t",newJEN2->data);
          newJEN2=newJEN2->link;
     }
}
