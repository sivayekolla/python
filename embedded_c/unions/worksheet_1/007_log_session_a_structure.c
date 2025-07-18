#include<stdio.h>
#include<string.h>

struct Student {
    char type;
    union {
        int roll_number;
        char id[10];
    };
};

void initRoll(struct Student *s, int roll) {
    s->type = 'R';
    s->roll_number = roll;
}

void initID(struct Student *s, const char *id_str) {
    s->type = 'I';
    strncpy(s->id, id_str, 9);
    s->id[9] = '\0';
}

void display(struct Student *s) {
    if (s->type == 'R') {
        printf("Roll Number: %d\n", s->roll_number);
    } else if (s->type == 'I') {
        printf("ID: %s\n", s->id);
    }
}

int main() {
    struct Student s1, s2;

    initRoll(&s1, 123);
    initID(&s2, "ABC123");

    display(&s1);
    display(&s2);

    return 0;
}
