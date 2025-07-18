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
st *attatch(st *head1,st*head2)
{
    st *temp=head1;
    while(head1->next)
    {
        head1=head1->next;
    }
    head1->next=head2;
    return head1;
}
int check(st*head1,st*head2)
{
    st *temp2=head2;
    while(head1)
    {
        temp2=head2;
        while(temp2)
        {

             if(head1==temp2)
            {
                return head1->num;
            }
            temp2=temp2->next;
        }
        head1=head1->next;
    }
    return 0;
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
    int n2;
    printf("enter n2 nodes");
    scanf("%d",&n2);
    for(int i=0;i<n2;i++)
    {
         head2=add_first(head2);
    }
    int n3;
    printf("enter n3 nodes");
    scanf("%d",&n3);
    for(int i=0;i<n3;i++)
    {
         head3=add_first(head3);
    }
    head1=attatch(head1,head3);
    head2=attatch(head2,head3);
    int data=check(head1,head2);
    printf("Intersection found at node with data: %d",data);
}