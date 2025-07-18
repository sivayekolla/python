#include <stdio.h>
#include <stdlib.h>
struct stu {
    int a;
    struct stu *link;
};
struct stu* pair(struct stu *head) {
    if (head == NULL || head->link == NULL)
        return head;
        struct stu *prev = NULL, *curr = head, *next = NULL;
    head = head->link; 
    while (curr != NULL && curr->link != NULL) {
        next = curr->link;
     curr->link = next->link;
        next->link = curr;
        if (prev != NULL) {
            prev->link = next;
        }
          prev = curr;
        curr = curr->link;
    }
     return head;
}
int main() {
    int p;
    printf("Enter number of nodes:\n");
    scanf("%d", &p);
     if (p <= 0) 
    return 0;
     struct stu *head = NULL, *temp = NULL;
    for (int i = 0; i < p; i++) {
        struct stu *new = malloc(sizeof(struct stu));
        new->link = NULL;
        printf("Enter value to node:\n");
        scanf("%d", &new->a);

        if (head == NULL) {
            head = new;
            temp = new;
        } else {
            temp->link = new;
            temp = new;
        }
    }
    printf("\nOriginal list:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->a);
        temp = temp->link;
    }
    printf("NULL\n");
    head = pair(head);
    printf("\nAfter swapping adjacent nodes:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->a);
        temp = temp->link;
    }
    printf("NULL\n");
}
