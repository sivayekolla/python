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
st *alternate_reversek(st *head,int k)
{
    st *curr=head;
    st *nextptr=NULL;
    st *prevptr=NULL;
    int cnt=0;
    while(cnt<k && curr!=NULL)
    {
        nextptr=curr;
        curr=prevptr;
        if(prevptr)
            prevptr->prev=curr;
        
        prevptr=curr;
        curr=nextptr;
        cnt++;
    }
    head->next=curr;
    st *temp=head->next;
    cnt=0;
    while(temp!=NULL&&cnt<k-1)
    {
        temp=temp->next;
    }
    if(temp!=NULL)
    {
        temp->next=alternate_reversek(temp->next,k);
        if(temp->next)
        {
            temp->next->prev=head;
        }
    }
    prevptr->prev=NULL;
    return prevptr;
}
int main()
{
     st *head1=NULL,*head2=NULL,*head3=NULL;
    int n,k;
    printf("enter n nodes");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         head1=add_first(head1);
    }
    printf("enter k:");
    scanf("%d",&k);

    printf("before:");
    print(head1);
    head1=alternate_reversek(head1,k);
    printf("after:");
    print(head1);
}