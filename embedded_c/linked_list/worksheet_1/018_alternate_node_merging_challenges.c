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
     scanf("%d %d",&a,&b);
     struct stu *head=(struct stu*)malloc(sizeof(struct stu));
     head->link=NULL;
     struct stu *temp=(struct stu*)malloc(sizeof(struct stu));
     temp->link=NULL;
     temp=head;
     printf("enter a values into list_1:\n");
     for(int i=0;i<a;i++)
     {
          struct stu *new=(struct stu*)malloc(sizeof(struct stu));
          new->link=NULL;
          temp->link=new;
          temp=new;
          scanf("%d",&new->data);
     }
     temp=head->link;
     struct stu *head1=(struct stu*)malloc(sizeof(struct stu));
     head1->link=NULL;
     struct stu *temp1=(struct stu*)malloc(sizeof(struct stu));
     temp1->link=NULL;
     temp1=head1;
     printf("enter a values into list_2:\n");
     for(int i=0;i<b;i++)
     {
          struct stu *new1=(struct stu*)malloc(sizeof(struct stu));
          new1->link=NULL;
          temp1->link=new1;
          temp1=new1;
          scanf("%d",&new1->data);
     }
     temp1=head1->link;
     struct stu*alt=(struct stu *)malloc(sizeof(struct stu));
     alt->link=NULL;
     int i=0;
     struct stu *temp2=(struct stu*)malloc(sizeof(struct stu));
     temp2=alt;
     printf("\n\n\n");
     while(temp != NULL || temp1!= NULL)
     {
          if(i%2 ==0 && temp != NULL)
          {
               temp2->link=temp;
               temp=temp->link;
               temp2=temp2->link;
               
          }
          else if(i%2 != 0 && temp1 !=NULL)
          {
               temp2->link=temp1;
               temp1=temp1->link;
               temp2=temp2->link;
               
          }
          i++;
     }
     temp2->link=NULL;
     temp2=alt->link;
    while(temp2 != NULL)
     {
          printf("%d\t",temp2->data);
          temp2=temp2->link;
     }
}