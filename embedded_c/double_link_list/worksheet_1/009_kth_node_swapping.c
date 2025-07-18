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
st *swap(st *head,int k)
{
    st *temp=head;
    int len=0,i;
    while(temp)
    {
        temp=temp->next;
        len++;
    }
    if(k>len) return head;
    if(2*k-1 == len) return head;
    st *first=head,*second=head;
    for(i=1;i<k;i++)
    {
        first=first->next;
    }
    for(i=1;i<len-k+1;i++)
    {
        second=second->next;
    }
    
    if (first->prev) first->prev->next = second;
    if (first->next) first->next->prev = second;

    if (second->prev) second->prev->next = first;
    if (second->next) second->next->prev = first;

    st*temp_prev=first->prev,*temp_next=first->next;
    first->prev=second->prev;
    first->next=second->next;
    second->prev=temp_prev;
    second->next=temp_next;
    
    if (k == 1) head = second;
    else if (k == len) head = first;

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
    int k;
    printf("enter k:");
    scanf("%d",&k);
    printf("before swapping kth node:");
    print(head1);
    head1=swap(head1,k);
    printf("\nafter swapping kth node:");
    print(head1);
}