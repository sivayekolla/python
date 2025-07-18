#include <stdio.h>
#include <stdlib.h>

struct stu {
    int data;
    struct stu *link;
};

int main() {
    int a;
    scanf("%d", &a);

    struct stu *arr = (struct stu *)malloc(sizeof(struct stu) * a);
    struct stu *head = malloc(sizeof(struct stu));
    head->link = NULL;
    struct stu *temp = head;

    for (int i = 0; i < a; i++) {
        struct stu *new = malloc(sizeof(struct stu));
        scanf("%d", &new->data);
        arr[i] = *new;
        temp->link = new;
        new->link = NULL;
        temp = new;
    }

    struct stu *ptr = head->link;
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }

    free(arr);
    ptr = head;
    while (ptr != NULL) {
        struct stu *next = ptr->link;
        free(ptr);
        ptr = next;
    }

    return 0;
}
