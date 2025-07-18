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
st *nth_node(st *head,int n)
{
    st *temp=head;
    int len=0;
    while(temp)
    {
        temp=temp->next;
        len++;
    }
    if(len<n){
        printf("n is invalid");
        return NULL;
    }
    temp=head;
    int k=len-n+1;
    for(int i=1;i<len-n+1;i++)
    {
        temp=temp->next;
    }
    return temp;
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
    printf("enter k:");
    scanf("%d",&k);
    st *node=nth_node(head1,k);
    printf("result:%d",node->num);
}