#include<stdio.h>
#include<stdlib.h>

struct node
{
     int data;
     struct node *link;
};

int main()
{
     int n;
     scanf("%d", &n);

     struct node *head = (struct node *)malloc(sizeof(struct node));
     head->link = NULL;
     struct node *temp = head;

     for (int i = 0; i < n; i++)
     {
          struct node *new = (struct node *)malloc(sizeof(struct node));
          scanf("%d", &new->data);
          new->link = NULL;
          temp->link = new;
          temp = new;
     }

     struct node *ptr = head->link;
     struct node **dptr = &ptr;
     int count = 0;

     while (*dptr != NULL)
     {
          count++;
          dptr = &((*dptr)->link);
     }

     printf("%d", count);

     return 0;
}
