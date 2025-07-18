#include <stdio.h>

struct StatusRegister {
    unsigned int error : 1;
    unsigned int ready : 1;
    unsigned int mode : 2;
    unsigned int reserved : 4;
};

int main() {
    struct StatusRegister reg;

    reg.error = 0;
    reg.ready = 1;
    reg.mode = 2;

    printf("Initial state: Error=%u, Ready=%u, Mode=%u\n", reg.error, reg.ready, reg.mode);

    reg.error = (reg.error == 0) ? 1 : 0;
    printf("After toggling error: Error=%u, Ready=%u, Mode=%u\n", reg.error, reg.ready, reg.mode);

    reg.ready = (reg.ready == 0) ? 1 : 0;
    printf("After toggling ready: Error=%u, Ready=%u, Mode=%u\n", reg.error, reg.ready, reg.mode);

    return 0;
}