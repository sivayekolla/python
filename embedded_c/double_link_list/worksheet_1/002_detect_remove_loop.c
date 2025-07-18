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
st * loop_attatch(st *head1)
{
    st *temp=head1,*loop_point=NULL;
    int i=1;
    while(temp->next)
    {
        if(i==3)
        {
            loop_point=temp;
        }
        temp=temp->next;
        i++;
    }
    if(loop_point)
    {
        temp->next=loop_point;
    }
    return head1;
}
st *loop_remove(st *head)
{
    st *fast=head,*slow=head;
    while(fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            break;
        }
    }
    if(slow!=fast)
    {
        printf("no loop\n");
        return head;
    }
    slow=head;
    while(fast!=slow)
    {
        fast=fast->next;
        slow=slow->next;
    }
    st *loop_end=fast;
    while(loop_end->next!=slow)
    {
        loop_end=loop_end->next;
    }
    loop_end->next=NULL;
    return head;
}
int main()
{
     st *head1=NULL,*head2=NULL;
    int n;
    printf("enter n nodes");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         head1=add_first(head1);
    }
    head1=loop_attatch(head1);
    head1=loop_remove(head1);
    printf("after removing loop:");
    print(head1);
}