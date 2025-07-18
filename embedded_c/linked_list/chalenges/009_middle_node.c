#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    int num;
    struct st*next;
}st;
st*add_last(st *head)
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
int middle_node(st *head)
{
    st *fast=head,*slow=head;
    while(fast && fast->next)
    {
        fast=fast->next->next;
        if(fast!=NULL)
        {
            slow=slow->next;
        }
    }
    return slow->num;
}
int main()
{
     st *head1=NULL;
    int n;
    printf("enter n nodes:");
    scanf("%d",&n);
    while(n--)
    {
        head1=add_last(head1);
    }
    printf("before values:");
    print(head1);
    int data=middle_node(head1);
    printf("middle node data holds:%d",data);
}