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
     struct stu *temp=(struct stu *)malloc(sizeof(struct stu));
     temp->link=NULL;
      struct stu *temp1=(struct stu *)malloc(sizeof(struct stu));
     temp1->link=NULL;
     temp=head;
     temp1=head1;
     printf("enter value to list 1:\n");
     printf("enter values 0-9:\n");
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
        printf("enter values 0-9:\n");
     for(int i=0;i<a;i++)
     {
          struct stu *new1=(struct stu *)malloc(sizeof(struct stu));
          new1->link=NULL;
          scanf("%d",&new1->data);
          temp1->link=new1;
          temp1=new1;
     }
     temp1=head1->link;
     int carry=0;
     int sum=0;
     while(temp != NULL && temp1 != NULL)
     {
          sum=(temp->data)+(temp1->data)+carry;
          if(sum>9)
          {
               carry=1;
               sum=sum%10;
          }
          else
          {
               carry=0;
          }
     printf("%d ",sum);
     temp=temp->link;
     temp1=temp1->link;
     }
     if(carry==1)
     {
          printf("%d",carry);
     }
}