#include<stdio.h>
#include<stdlib.h>

struct stu {
    int data;
    struct stu *link;
};

int main() {
    int n, k;
    printf("enter number of nodes:\n");
    scanf("%d", &n);
    struct stu *head = NULL, *temp = NULL, *new = NULL;
    for (int i = 0; i < n; i++) {
        new = (struct stu *)malloc(sizeof(struct stu));
        scanf("%d", &new->data);
        new->link = NULL;
        if (head == NULL) {
            head = new;
            temp = new;
        } else {
            temp->link = new;
            temp = new;
        }
    }

  //  printf("enter block size:\n");
   // scanf("%d", &k);

    struct stu *prev = NULL, *curr = head, *next = NULL, *res = NULL, *tail = NULL;
    while (curr != NULL) {
        struct stu *block_head = curr;
        struct stu *block_prev = NULL;
        int count = 0;
        while (curr != NULL && count < 2) {
            next = curr->link;
            curr->link = block_prev;
            block_prev = curr;
            curr = next;
            count++;
        }
        if (res == NULL) {
            res = block_prev;
            tail = block_head;
        } else {
            tail->link = block_prev;
            tail = block_head;
        }
    }

    temp = res;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}
 