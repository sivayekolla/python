#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stu {
    int data;
    struct stu *link;
};

int main() {
    int a, b;
    printf("enter a value for no of nodes:\n");
    scanf("%d %d", &a, &b);

    // First list
    struct stu *head = (struct stu *)malloc(sizeof(struct stu));
    head->link = NULL;
    struct stu *temp = (struct stu *)malloc(sizeof(struct stu));
    temp->link = NULL;
    temp = head;

    printf("enter values into list 1:\n");
    for (int i = 0; i < a; i++) {
        struct stu *new = (struct stu *)malloc(sizeof(struct stu));
        new->link = NULL;
        scanf("%d", &new->data);
        temp->link = new;
        temp = new;
    }
    temp = head->link;

    // Second list
    struct stu *head1 = (struct stu *)malloc(sizeof(struct stu));
    head1->link = NULL;
    struct stu *temp1 = (struct stu *)malloc(sizeof(struct stu));
    temp1->link = NULL;
    temp1 = head1;

    printf("enter values into list 2:\n");
    for (int i = 0; i < b; i++) {
        struct stu *new1 = (struct stu *)malloc(sizeof(struct stu));
        new1->link = NULL;
        scanf("%d", &new1->data);
        temp1->link = new1;
        temp1 = new1;
    }
    temp1 = head1->link;

    
    struct stu *merged = (struct stu *)malloc(sizeof(struct stu));
    merged->link = NULL;
    struct stu *mergeTail = merged;

    while (temp != NULL && temp1 != NULL) {
        struct stu *newNode = (struct stu *)malloc(sizeof(struct stu));
        newNode->link = NULL;

        if (temp->data <= temp1->data) {
            newNode->data = temp->data;
            temp = temp->link;
        } else {
            newNode->data = temp1->data;
            temp1 = temp1->link;
        }

        mergeTail->link = newNode;
        mergeTail = newNode;
    }

   
    while (temp != NULL) {
        struct stu *newNode = (struct stu *)malloc(sizeof(struct stu));
        newNode->data = temp->data;
        newNode->link = NULL;
        mergeTail->link = newNode;
        mergeTail = newNode;
        temp = temp->link;
    }

    while (temp1 != NULL) {
        struct stu *newNode = (struct stu *)malloc(sizeof(struct stu));
        newNode->data = temp1->data;
        newNode->link = NULL;
        mergeTail->link = newNode;
        mergeTail = newNode;
        temp1 = temp1->link;
    }

    
    struct stu *m = merged->link;
    printf("Merged sorted list:\n");
    while (m != NULL) {
        printf("%d -> ", m->data);
        m = m->link;
    }
    printf("NULL\n");

    return 0;
}
