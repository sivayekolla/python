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
st *sechalf(st *head)
{
    st *fast=head;
    st *slow=head;
    while(fast && fast->next)
    {
        fast=fast->next->next;
        if(fast!=NULL)
            slow=slow->next;
    }
    st *mid=slow->next;
    mid->prev=NULL;
    slow->next=NULL;
    return mid;
}
int main()
{
     st *head1=NULL;
    int n,k;
    printf("enter n nodes");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         head1=add_first(head1);
    }
    printf("before:");
    print(head1);
    st *head2=sechalf(head1);
    printf("first half:");
    print(head1);
    printf("\nsecond half:");
    print(head2);
}