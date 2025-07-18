#include<stdio.h>
#include<stdlib.h>

struct stu
{
    int data;
    struct stu *link;
};
int main()
{
    int a;
    printf("enter number of nodes:\n");
    scanf("%d", &a);
    struct stu *head = NULL;
    struct stu *temp = NULL;
    for (int i = 0; i < a; i++)
    {
        struct stu *new = (struct stu *)malloc(sizeof(struct stu));
        new->link = NULL;
        scanf("%d", &new->data);
        if (head == NULL)
        {
            head = new;
            temp = new;
        }
        else
        {
          temp->link = new;
          temp = new;
        }
    }
    struct stu *slow = head;
    struct stu *fast = head;
    struct stu *prev=NULL;
    int loop = 0;
    while (fast && fast->link)
    {
        slow = slow->link;
        fast = fast->link->link;
        if (slow == fast)
        {
          loop = 1;
          break;
        }
    }
     if (loop)
    {
        slow = head;
        if (slow != fast)
        {
            while (slow->link != fast->link)
            {
                prev=fast;
                slow = slow->link;
                fast = fast->link;
            }
            prev->link = NULL;
        }
        /*else
        {
            while (fast->link != slow)
            {
                fast = fast->link;
            }
            fast->link = NULL;
        }*/
        printf("Loop detected and removed.\n");
    }

    temp = head;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}
