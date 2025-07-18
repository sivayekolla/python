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
st* partition_list(st* head, int x) {
    st dummy1, dummy2, dummy3;
    dummy1.next = dummy2.next = dummy3.next = NULL;
    st *first = &dummy1, *second = &dummy2;
    st*middle = &dummy3;
 
    while (head) {
        if (head->num < x) {
            first->next = head;
            first = first->next;
        } else if (head->num > x) {
            second->next = head;
            second = second->next;
        } else {
            middle->next = head;
            middle = middle->next;
        }
        head = head->next;
    }
 
    first->next = dummy3.next;
    middle->next = dummy2.next;
    second->next = NULL;
 
    return dummy1.next;
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
    printf("before partotion:");
    print(head1);
    int pivot;
    printf("enter pivot:");
    scanf("%d",&pivot);
    head1=partition_list(head1,pivot);
    printf("after partition:");
    print(head1);
}