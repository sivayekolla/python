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
st * reordering(st *head)
{
    st *odd=head;
    st *even=head->next;
    st *evenstart=even;
    while(even && even->next)
    {
        odd->next=even->next;
        odd->next->prev=odd;
        odd=odd->next;

        even->next=odd->next;
        if(even->next)
            even->next->prev=even;
        even=even->next;
    }
    odd->next=evenstart;
    if(evenstart) evenstart->prev=odd;
    return head;
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
    printf("before:");
    print(head1);
    head1=reordering(head1);
    printf("after:");
    print(head1);
}