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
st *add(st *head1,st *head2)
{
    st *res=NULL,**result=&res;
    int carry=0;
    while(head1||head2||carry)
    {
        int val1=head1->num;
        int val2=head2->num;
        int sum=val1+val2+carry;
        st *node=malloc(sizeof(st));
        node->num=sum%10;
        node->next=NULL;
        *result=node;
        result=&node->next;
        carry=sum/10;
        if(head1) head1=head1->next;
        if(head2) head2=head2->next;
    }
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
    int n2;
    printf("enter n2 nodes");
    scanf("%d",&n2);
    for(int i=0;i<n2;i++)
    {
         head2=add_first(head2);
    }
    st *res=add(head1,head2);
    printf("addition:");
    print(res);
}