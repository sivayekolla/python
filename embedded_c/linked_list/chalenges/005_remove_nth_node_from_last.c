#include<stdio.h>
#include<stdlib.h>

struct stu {
    int data;
    struct stu *link;
};

int main() {
    int n, pos;
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

    scanf("%d", &pos); 

    struct stu *fast = head, *slow = head, *prev = NULL;
    int count = 0;

    while (count < pos) {
        if (fast == NULL) break;
        fast = fast->link;
        count++;
    }

    if (fast == NULL) {
        struct stu *del = head;
        head = head->link;
        free(del);
    } else {
        while (fast != NULL) {
            fast = fast->link;
            prev = slow;
            slow = slow->link;
        }
        prev->link = slow->link;
        free(slow);
    }

    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}
