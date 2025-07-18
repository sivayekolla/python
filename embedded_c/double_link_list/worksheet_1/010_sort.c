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
st *merge(st *head1, st *head2)
{
    st *res = NULL, **merge = &res, *prev = NULL;
    while (head1 && head2)
    {
        if (head1->num < head2->num)
        {
            *merge = head1;
            head1->prev = prev;
            prev = head1;
            head1 = head1->next;
        }
        else
        {
            *merge = head2;
            head2->prev = prev;
            prev = head2;
            head2 = head2->next;
        }
        merge = &((*merge)->next);
    }
    if (head1) {
        *merge = head1;
        head1->prev = prev;
    } else if (head2) {
        *merge = head2;
        head2->prev = prev;
    }
    return res;
}
st *split(st *head)
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
    st *res=slow->next;
    slow->next=NULL;
    return res;
}
st *mergesort(st *head)
{
    if(head==NULL || head->next==NULL) return head;
    st *second=split(head);
    second=mergesort(second);
    head=mergesort(head);
    head=merge(head,second);
    return head;
}
int main()
{
     st *head1=NULL,*head2=NULL,*head3=NULL;
    int n;
    printf("enter n nodes");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         head1=add_first(head1);
    }
    printf("before sorting:");
    print(head1);
    head1=mergesort(head1);
    printf("\nafter sorting:");
    print(head1);
}