#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct stu {
    int arr1;
    struct stu *link;
};

void yep(struct stu *temp1) {
    struct stu *temp2;
    while (temp1 != NULL) {
        temp2 = temp1->link;
        free(temp1);
        temp1 = temp2;
    }
}

int main() {
    int a;
    printf("enter no of nodes:\n");
    scanf("%d", &a);

    struct stu *head = (struct stu*)malloc(sizeof(struct stu));
    head->link = NULL;
    struct stu *temp = head;

    for (int i = 0; i < a; i++) {
        struct stu *new = (struct stu*)malloc(sizeof(struct stu));
        new->link = NULL;
        temp->link = new;
        temp = new;
    }

    temp = head->link;
    yep(temp);
    free(head);

    return 0;
}
