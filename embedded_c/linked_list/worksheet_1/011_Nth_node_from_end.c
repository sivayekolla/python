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
     printf("enter position from last:\n");
     scanf("%d %d",&a,&b);
     struct stu *head=(struct stu*)malloc(sizeof(struct stu));
     head->link=NULL;
     struct stu *temp=(struct stu*)malloc(sizeof(struct stu));
     temp->link=NULL;
     temp=head;
     printf("enter values:\n");
     for(int i=0;i<a;i++)
     {
          struct stu *new=(struct stu*)malloc(sizeof(struct stu));
          scanf("%d",&new->data);
          new->link=NULL;
          temp->link=new;
          temp=new;
     }
     temp=head->link;
     int amp=a-b;
     printf("the value is: ");
     for(int i=0;i<=amp;i++)
     {
          
          if(i==amp)
          {
               printf("%d",temp->data);
               break;
          }
          temp=temp->link;
     }
}