#include<stdio.h>
#include<stdlib.h>

typedef struct st {
    int num;
    struct st *next, *prev;
} st;

st* add_first(st *head) {
    st *node = malloc(sizeof(st));
    if (node == NULL) {
        printf("memory not allocated\n");
        return NULL;
    }
    printf("enter value:\n");
    scanf("%d", &node->num);
    node->next = NULL;
    node->prev = NULL;
    if (head == NULL) {
        head = node;
    } else {
        st* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        node->prev = temp;
        temp->next = node;
    }
    return head;
}

void print(st *head) {
    while (head != NULL) {
        printf("%d ", head->num);
        head = head->next;
    }
    printf("\n");
}

st*  partitioning_list(st *head,int num){
        st dummy1;
        st dummy2;
 
        st *left=&dummy1;
        st *right=&dummy2;
        while(head){
                if(head->num < num){
                        head->prev=left;
                        left->next=head;
                        left=left->next;
                }else{
                        head->prev=right;
                        right->next=head;
                        right=right->next;
                }
                head=head->next;
        }
        (dummy2.next)->prev = left;
        left->next=dummy2.next;
        right->next=NULL;
 
        (dummy1.next)->prev=NULL;
 
        return dummy1.next ;
}
int main() {
    st *head1 = NULL;
    int n;
    printf("enter n nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        head1 = add_first(head1);
    }
    int x;
    printf("pivot x value: ");
    scanf("%d", &x);
    printf("before partition: ");
    print(head1);
    head1 = partitioning_list(head1, x);
    printf("after partition: ");
    print(head1);
    return 0;
}