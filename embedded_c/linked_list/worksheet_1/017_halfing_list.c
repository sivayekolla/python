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
     printf("enter a value for no of nodes:\n");
     scanf("%d", &a);

     struct stu *head = (struct stu*)malloc(sizeof(struct stu));
     head->link = NULL;
     struct stu *temp = head;

     for(int i = 0; i < a; i++)
     {
          struct stu *new = (struct stu*)malloc(sizeof(struct stu));
          new->link = NULL;
          temp->link = new;
          temp = new;
          scanf("%d", &temp->data);
     }

     temp = head->link;

     struct stu *newP = (struct stu*)malloc(sizeof(struct stu));
     newP->link = NULL;
     struct stu *temp1 = newP;

     struct stu *newO = (struct stu*)malloc(sizeof(struct stu));
     newO->link = NULL;
     struct stu *temp2 = newO;

     for(int i = 0; i < a / 2; i++)
     {
          struct stu *newP1 = (struct stu*)malloc(sizeof(struct stu));
          newP1->link = NULL;

          temp1->data = temp->data;
          temp1->link = newP1;
          temp1 = newP1;
          temp = temp->link;
     }
     temp1->link = NULL;
     temp1 = newP;

     for(int i = a / 2; i < a; i++)
     {
          struct stu *newO0 = (struct stu*)malloc(sizeof(struct stu));
          newO0->link = NULL;

          temp2->data = temp->data;
          temp2->link = newO0;
          temp2 = newO0;
          temp = temp->link;
     }
     temp2->link = NULL;
     temp2 = newO;

     for(int i = 0; i < a / 2; i++)
     {
          printf("%d\t", temp1->data);
          temp1 = temp1->link;
     }
     printf("\n\n");
     for(int i = a / 2; i < a; i++)
     {
          printf("%d\t", temp2->data);
          temp2 = temp2->link;
     }

     return 0;
}
