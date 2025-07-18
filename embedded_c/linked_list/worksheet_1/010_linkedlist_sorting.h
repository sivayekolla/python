#include <stdio.h>
#include <stdlib.h>

struct stu 
{
    int data;
    struct stu *link;
};
int main() 
{
    int a;
    printf("Enter number of elements:\n");
    scanf("%d", &a);
    struct stu *head = NULL, *temp = NULL;
    printf("Enter values:\n");
    for (int i = 0; i < a; i++) {
        struct stu *new1 = (struct stu *)malloc(sizeof(struct stu));
        scanf("%d", &new1->data);
        new1->link = NULL;
        if (head == NULL) {
            head = new1;
            temp = new1;
        } else {
            temp->link = new1;
            temp = new1;
        }
    }
    if (head == NULL || head->link == NULL) {
    } else {
        struct stu *first, *second, *slow, *fast;
        struct stu *left, *right, *sorted, *tail;
        slow = head;
        fast = head->link;
        while (fast && fast->link) {
            slow = slow->link;
            fast = fast->link->link;
        }
        first = head;
        second = slow->link;
        slow->link = NULL;        
        struct stu *pa = first, *pb = NULL;
        if (first && first->link) {
            slow = first;
            fast = first->link;
            while (fast && fast->link) {
                slow = slow->link;
                fast = fast->link->link;
            }
            pb = slow->link;
            slow->link = NULL;
            left = first;
            right = pb;
            sorted = NULL;
            tail = NULL;
            while (left && right) {
                struct stu *min = NULL;
                if (left->data <= right->data) {
                    min = left;
                    left = left->link;
                } else {
                    min = right;
                    right = right->link;
                }
                min->link = NULL;
                if (sorted == NULL) {
                    sorted = min;
                    tail = min;
                } else {
                    tail->link = min;
                    tail = min;
                }
            }
            if (left) tail->link = left;
            if (right) tail->link = right;
            first = sorted;
        }
        pa = second;
        pb = NULL;
        if (second && second->link) {
            slow = second;
            fast = second->link;
            while (fast && fast->link) {
                slow = slow->link;
                fast = fast->link->link;
            }
            pb = slow->link;
            slow->link = NULL;
            left = second;
            right = pb;
            sorted = NULL;
            tail = NULL;
            while (left && right) {
                struct stu *min = NULL;
                if (left->data <= right->data) {
                    min = left;
                    left = left->link;
                } else {
                    min = right;
                    right = right->link;
                }
                min->link = NULL;
                if (sorted == NULL) {
                    sorted = min;
                    tail = min;
                } else {
                    tail->link = min;
                    tail = min;
                }
            }
            if (left) tail->link = left;
            if (right) tail->link = right;
            second = sorted;
        }
        left = first;
        right = second;
        sorted = NULL;
        tail = NULL;
        while (left && right) {
            struct stu *min = NULL;
            if (left->data <= right->data) {
                min = left;
                left = left->link;
            } else {
                min = right;
                right = right->link;
            }
            min->link = NULL;
            if (sorted == NULL) {
                sorted = min;
                tail = min;
            } else {
                tail->link = min;
                tail = min;
            }
        }
        if (left) tail->link = left;
        if (right) tail->link = right;

        head = sorted;
    }
    printf("Sorted list:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}
