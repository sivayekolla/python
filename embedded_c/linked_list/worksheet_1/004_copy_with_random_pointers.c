#include<stdio.h>
#include<stdlib.h>

struct stu {
    int data;
    struct stu *link;
    struct stu *random;
};

int main() 

{
    int a;
    printf("enter number of nodes:\n");
    scanf("%d", &a);
    struct stu *head = NULL, *temp = NULL, *new = NULL;
    struct stu *arr[100];
    for (int i = 0; i < a; i++) {
        new = (struct stu *)malloc(sizeof(struct stu));
        scanf("%d", &new->data);
        new->link = NULL;
        new->random = NULL;
        if (head == NULL) {
            head = new;
            temp = new;
        } else {
            temp->link = new;
            temp = new;
        }
        arr[i] = new;
    }

    int r;
    for (int i = 0; i < a; i++) {
        scanf("%d", &r);
        for (int j = 0; j < a; j++) {
            if (arr[j]->data == r) {
                arr[i]->random = arr[j];
                break;
            }
        }
    }

    struct stu *curr = head;
    while (curr != NULL) {
        new = (struct stu *)malloc(sizeof(struct stu));
        new->data = curr->data;
        new->random = NULL;
        new->link = curr->link;
        curr->link = new;
        curr = new->link;
    }

    curr = head;
    while (curr != NULL) {
        if (curr->random != NULL)}
    
}