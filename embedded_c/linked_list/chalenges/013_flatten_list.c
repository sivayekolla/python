/*Flatten a Multilevel Linked List
Input: 1 → 2 → 3, node 2’s child: 7 → 8, node 8’s child: 11*/

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
    struct Node* child;
};
struct Node* createNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    node->child = NULL;
    return node;
}
void flatten(struct Node* head) {
    struct Node* curr = head;
    while (curr) {
        if (curr->child) {
            struct Node* next = curr->next;
            curr->next = curr->child;
            struct Node* tail = curr->child;
            while (tail->next)
                tail = tail->next;
            tail->next = next;
            curr->child = NULL;
        }
        curr = curr->next;
    }
}

void printList(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    
    head->next->child = createNode(7);
    head->next->child->next = createNode(8);
    head->next->child->next->child = createNode(11);

    flatten(head);
    printList(head); 

    return 0;
}