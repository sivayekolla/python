#include<stdio.h>
#include<stdlib.h>

struct stu {
    int data;
    struct stu *link;
};

int main() {
    int n, k;
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

    scanf("%d", &k);

    struct stu *curr = head, *prev_tail = NULL, *res = NULL;
    int reverse = 1;

    while (curr != NULL) {
        int count = 0;
        struct stu *block_head = NULL;
        struct stu *block_tail = NULL;
        struct stu *next = NULL;

        if (reverse) {
            while (curr != NULL && count < k) {
                next = curr->link;
                if (block_head == NULL) {
                    block_head = curr;
                    block_tail = curr;
                    block_tail->link = NULL;
                } else {
                    curr->link = block_head;
                    block_head = curr;
                }
                curr = next;
                count++;
            }

            if (res == NULL) {
                res = block_head;
                prev_tail = block_tail;
            } else {
                prev_tail->link = block_head;
                prev_tail = block_tail;
            }
        } else {
            block_head = curr;
            while (curr != NULL && count < k) {
                block_tail = curr;
                curr = curr->link;
                count++;
            }
            if (res == NULL) {
                res = block_head;
                prev_tail = block_tail;
            } else {
                prev_tail->link = block_head;
                prev_tail = block_tail;
            }
        }

        reverse = !reverse;
    }

    temp = res;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}
