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
int check_palindrome(st *head)
{
    st *start=head,*end=head;
    while(end && end->next)
    {
        end=end->next;
    }
    while(start!=end && start->prev!=end)
    {
        if(start->num!=end->num)
        {
            return 0;
        }
        start=start->next;
        end=end->prev;
    }
    return 1;
}
int main()
{
     st *head1=NULL,*head2=NULL;
    int n;
    printf("enter n nodes");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         head1=add_first(head1);
    }
    if(check_palindrome(head1))
    {
        printf("Linked list is a palindrome");
    }
    else{
        printf("Linked list is not a palindrome");
    }
}