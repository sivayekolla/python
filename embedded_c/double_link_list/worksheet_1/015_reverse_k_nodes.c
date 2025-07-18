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
st *reversek(st *head,int k)
{
    st *curr=head;
    st *nextptr=NULL;
    st *prevptr=NULL;
    int cnt=0;
    while(cnt<k && curr!=NULL)
    {
        nextptr=curr->next;
        curr->next=prevptr;
        curr->prev=nextptr;
        prevptr=curr;
        curr=nextptr;
        cnt++;
    }
    if(nextptr!=NULL)
    {
        head->next=reversek(nextptr,k);
        if(head->next)
        {
            head->next->prev=head;
        }
    }
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
    head1=reversek(head1,k);
    printf("after:");
    print(head1);
}