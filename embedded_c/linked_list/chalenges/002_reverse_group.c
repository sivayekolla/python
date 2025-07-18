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

    struct stu *curr = head;
    struct stu *res = NULL;
    struct stu *tail = NULL;

    while (curr != NULL) 
    {
        int count = 0;
        struct stu *rev_head = NULL;
        struct stu *rev_tail = NULL;
        struct stu *next = NULL;
        while (curr != NULL && count < k) 
        {
            next = curr->link;
            if (rev_head == NULL) 
            {
                rev_head = curr;
                rev_tail = curr;
                rev_tail->link = NULL;
            } 
            else 
            {
                curr->link = rev_head;
                rev_head = curr;
            }
            curr = next;
            count++;
        }

        if (res == NULL) 
        {
            res = rev_head;
            tail = rev_tail;
        } 
        else 
        {
            tail->link = rev_head;
            tail = rev_tail;
        }
    }

    temp = res;
    while (temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}
