#include<stdio.h>
#include<stdlib.h>
struct stu
{
     int a;
     struct stu *link;
};
int main()
{
     int a;
     printf("enter nuber of nodes:\n");
     scanf("%d",&a);
     struct stu *head=(struct stu *)malloc(sizeof(struct stu));
     head->link=NULL;
     struct stu *temp=(struct stu *)malloc(sizeof(struct stu));
     temp->link=NULL;
     temp=head;
     for(int i=0;i<a;i++)
     {
          struct stu *new=(struct stu *)malloc(sizeof(struct stu));
          new->link=NULL;
          scanf("%d",&new->a);
          temp->link=new;
          temp=new;
     }
     struct stu *temp1=(struct stu *)malloc(sizeof(struct stu));
     temp=head->link;
     temp1=head;

     struct stu *oddHead = (struct stu *)malloc(sizeof(struct stu));
     struct stu *evenHead = (struct stu *)malloc(sizeof(struct stu));
     oddHead->link = NULL;
     evenHead->link = NULL;
     struct stu *oddTail = oddHead;
     struct stu *evenTail = evenHead;

     while(temp != NULL)
     {
          struct stu *next = temp->link;
          temp->link = NULL;
          if(temp->a % 2 == 0)
          {
               evenTail->link = temp;
               evenTail = temp;
          }
          else
          {
               oddTail->link = temp;
               oddTail = temp;
          }
          temp = next;
     }

     oddTail->link = evenHead->link;
     head->link = oddHead->link;

     temp = head->link;
     while(temp != NULL)
     {
          printf("%d ", temp->a);
          temp = temp->link;
     }
}
