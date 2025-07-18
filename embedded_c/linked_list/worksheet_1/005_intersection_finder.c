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
     int *arr=NULL;int count=0;
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
     temp=head->link;
     for(int i=0;i<(a-1);i++)
     {
          temp1=head1->link;
          for(int j=0;j<(a-1);j++)
          {
               if((temp != NULL )&& (temp1 != NULL) &&
                (temp->link != NULL) && (temp1->link != NULL)&&((temp->data)==(temp1->data))&&((temp->link->data)==(temp1->link->data)))
               {
                    printf("%d->%d\n",temp->data,temp->link->data);
                    break;
               }
               temp1=temp1->link;
          }
          
          temp=temp->link;
     }
}