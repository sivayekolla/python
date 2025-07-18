#include<stdio.h>

void button() {
    printf("button press event\n");
}

void sensor() {
    printf("sensor trigger event\n");
}

int main() {
    void (*event[2])() = {button, sensor};
    int events[5] = {0, 1, 0, 1, 1};
    for (int i = 0; i < 5; i++) {
        event[events[i]]();
    }
    return 0;
}
