#include <stdio.h>
#include <stdlib.h>

typedef struct st {
    int data;
    struct st *next, *prev, *rand;
} st;

st *head = NULL, *head1 = NULL;

st* add_last(st *head) {
    st *node = malloc(sizeof(st));
    if (node == NULL) {
        printf("memory not allocated\n");
        return NULL;
    }
    printf("enter value:\n");
    scanf("%d", &node->data);
    node->next = NULL;
    node->prev = NULL;
    node->rand = NULL;
    if (head == NULL) {
        head = node;
    } else {
        st* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = node;
        node->prev = temp;
    }
    return head;
}

void copy_random_pointer() {
    st* temp = head;
    st* last = NULL;
    st* new = NULL;
    int data;
    st *temp1, *search;
    while (temp) {
        new = calloc(1, sizeof(st));
        new->data = temp->data;
        new->next = NULL;
        new->prev = last;
        new->rand = NULL;
        if (head1 == NULL) {
            head1 = new;
            last = new;
        } else {
            last->next = new;
            new->prev = last;
            last = new;
        }
        temp = temp->next;
    }

    temp = head;
    temp1 = head1;
    while (temp) {
        if (temp->rand != NULL) {
            data = temp->rand->data;
            search = head1;
            while (search && search->data != data)
                search = search->next;
            temp1->rand = search;
        }
        temp1 = temp1->next;
        temp = temp->next;
    }
}

void display_rand(st *head) {
    st *temp = head;
    while (temp) {
        if (temp->rand)
            printf("%d ", temp->rand->data);
        else
            printf("NULL ");
        temp = temp->next;
    }
    printf("\n");
}

void main() {
    int i = 0;
    st* temp;

    for (i = 0; i < 5; i++) {
        head = add_last(head);
    }
    temp = head;
    temp->rand = temp->next->next;

    temp = temp->next;
    temp->rand = temp->next->next;

    temp = temp->next;
    temp->rand = temp->next->next;

    temp = temp->next;
    temp->rand = head;

    temp = temp->next;
    temp->rand = head->next->next;

    copy_random_pointer();
    display_rand(head1);
}