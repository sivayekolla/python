#include <stdio.h>
#include <string.h>

struct DataStruct {
    char ch;
    int i;
    float f;
};

union DataUnion {
    char ch;
    int i;
    float f;
};

union Packet {
    char buffer[4];
    int cmd;
};

int main() {
    struct DataStruct s;
    union DataUnion u;
    union Packet p;

    printf("Size of struct: %lu\n", sizeof(s));
    printf("Size of union: %lu\n", sizeof(u));

    s.ch = 'A';
    s.i = 100;
    s.f = 3.14;

    u.ch = 'A';
    printf("Union after char: ch=%c, i=%d, f=%f\n", u.ch, u.i, u.f);

    u.i = 100;
    printf("Union after int: ch=%c, i=%d, f=%f\n", u.ch, u.i, u.f);

    u.f = 3.14;
    printf("Union after float: ch=%c, i=%d, f=%f\n", u.ch, u.i, u.f);

    p.cmd = 0x41424344;
    printf("Packet as int: %X\n", p.cmd);
    printf("Packet as bytes: %X %X %X %X\n", p.buffer[0], p.buffer[1], p.buffer[2], p.buffer[3]);

    return 0;
}
