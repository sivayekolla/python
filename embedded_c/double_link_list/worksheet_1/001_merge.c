#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    int num;
    struct st*next,*prev;
}st;
st*add_first(st *head)
{
    st *node=malloc(sizeof(st));
    if(node==NULL)
    {
        printf("memory not allocated\n");
        return NULL;
    }
    printf("enter value:\n");
    scanf("%d",&node->num);
    node->next=NULL;
    node->prev=NULL;
    if(head==NULL)
    {
        head=node;
    }
    else{
        st* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        node->prev=temp;
        temp->next=node;
        
    }
    return head;
}
void print(st *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->num);
        head=head->next;
    }
}
st *merge(st *head1,st*head2)
{
    st *merge,**temp=&merge;
    st*prevptr=NULL;
    while(head1&&head2)
    {
        if(head1->num<head2->num)
        {
            *temp=head1;
            head1=head1->next;
        }
        else{
            *temp=head2;
            head2=head2->next;
        }
        (*temp)->prev=prevptr;
        prevptr=*temp;
        temp=&((*temp)->next);
    }
    *temp=(head1)?head1:head2;
    if(*temp)
        (*temp)->prev=prevptr;
    return merge;
}
int main()
{
     st *head1=NULL,*head2=NULL;
    head1=add_first(head1);
    head1=add_first(head1);
    head1=add_first(head1);
    head1=add_first(head1);
    head2=add_first(head2);
    head2=add_first(head2);
    head2=add_first(head2);
    head1=merge(head1,head2);
    printf("merged values:");
    print(head1);
}