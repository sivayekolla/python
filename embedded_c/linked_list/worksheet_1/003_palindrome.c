#include<stdio.h>
#include<stdlib.h>

struct stu {
    int data;
    struct stu *link;
};

int main() {
    int a;
    printf("enter number of nodes:\n");
    scanf("%d", &a);
    struct stu *head = NULL, *temp = NULL, *new = NULL;
    for (int i = 0; i < a; i++) {
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

    int *arr = (int *)malloc(a * sizeof(int));
    temp = head;
    int i = 0;
    while (temp != NULL) {
        arr[i++] = temp->data;
        temp = temp->link;
    }

    int flag = 1;
    for (int j = 0; j < a / 2; j++) {
        if (arr[j] != arr[a - 1 - j]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Linked list is a palindrome\n");
    else
        printf("Linked list is not a palindrome\n");
}
