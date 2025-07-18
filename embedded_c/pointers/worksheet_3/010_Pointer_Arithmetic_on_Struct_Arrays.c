#include<stdio.h>

typedef struct Peripheral 
{
    int status;
    int control;
    int data;
} manual;

int main()
{
    manual abc[5];
    manual *ptr;
    int i;

    ptr = abc;

    for (i = 0; i < 5; i++) 
    {
        (ptr + i)->status = i;
        (ptr + i)->control = i + 10;
        (ptr + i)->data = i + 100;
    }

    for (i = 0; i < 5; i++) {
        printf("Struct %d: status=%d control=%d data=%d\n", i, (ptr + i)->status, (ptr + i)->control, (ptr + i)->data);
    }

    return 0;
}
