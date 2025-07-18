#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    int num;
    struct st*next;
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
st *reversek(st *head,int k)
{
    st*prevptr=NULL;
    st*currptr=head;
    st*next;
    int cnt=0;
    while(currptr!=NULL && cnt<k)
    {
        next=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=next;
        cnt++;
    }
    if(currptr!=NULL)
    {
        head->next=reversek(next,k);
    }
    return prevptr;
}
int main()
{
     st *head1=NULL;
    head1=add_first(head1);
    head1=add_first(head1);
    head1=add_first(head1);
    head1=add_first(head1);
    head1=add_first(head1);
    head1=add_first(head1);
    head1=add_first(head1);
    printf("before values:");
    print(head1);
    int k;
    printf("enter k:");
    scanf("%d",&k);
    head1=reversek(head1,k);
    printf("after reverseing  k nodes:");
    print(head1);
}