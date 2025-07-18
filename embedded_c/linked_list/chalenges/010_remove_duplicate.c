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
     printf("enter no of nodes:\n");
     scanf("%d",&a);
     struct stu *head=(struct stu *)malloc(sizeof(struct stu));
     head->link=NULL;
     struct stu *trump=(struct stu *)malloc(sizeof(struct stu));
     trump->link=NULL;
     trump=head;
     for(int i=0;i<a;i++)
     {
          struct stu *new=(struct stu *)malloc(sizeof(struct stu));
          new->link=NULL;
          scanf("%d",&new->data);
          trump->link=new;
          trump=new;
     }

     trump=head->link;
     while(trump != NULL)
     {
          struct stu *temp=trump;
          while(temp->link != NULL)
          {
               if(temp->link->data == trump->data)
               {
                    struct stu *dup = temp->link;
                    temp->link = temp->link->link;
               }
               else
               {
                    temp = temp->link;
               }
          }
          trump = trump->link;
     }

     struct stu *print = head->link;
     while(print != NULL)
     {
          printf("%d ",print->data);
          print = print->link;
     }
}
