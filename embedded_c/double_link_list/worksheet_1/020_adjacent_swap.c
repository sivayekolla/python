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
st* pairwise_reverse(st *head) {
    if (!head || !head->next)
        return head;

    st *curr = head;
    st *new_head = head->next;

    while (curr && curr->next) {
        st *next_node = curr->next;
        st *next_pair = next_node->next;

        next_node->prev = curr->prev;
        next_node->next = curr;

        curr->prev = next_node;
        curr->next = next_pair;

        if (next_pair)
            next_pair->prev = curr;

        if (next_node->prev)
            next_node->prev->next = next_node;

        curr = next_pair;
    }

    return new_head;
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
    head1=pairwise_reverse(head1);
    printf("after:");
    print(head1);
}