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
st *rotate(st *head,int k)
{
    st *new_head=NULL,*tail=head;
    st *temp=head;
    for(int i=1;i<k;i++)
    {
        tail=tail->next;
    }
    new_head=tail->next;
    st *res=new_head;
    tail->next=NULL;
    while(new_head->next)
    {
        new_head=new_head->next;
    }
    new_head->next=temp;
    return res;
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
    int k;
    printf("enter k:");
    scanf("%d",&k);
    printf("before rotation:");
    print(head1);
    head1=rotate(head1,k);
    printf("after rotation:");
    print(head1);
}