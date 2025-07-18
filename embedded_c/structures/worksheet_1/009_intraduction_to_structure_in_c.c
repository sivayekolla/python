#include <stdio.h>

struct Data 
{
    int id;
    float voltage;
    char status;
};

union udata 
{
    int id;
    float voltage;
    char status;
};

int main() 
{
    struct Data s1 = {101, 3.3, 'A'};
    struct Data s2;
    s2.id = 102;
    s2.voltage = 5.0;
    s2.status = 'B';

    int arr[3] = {103, 0, 0};  

    union udata u1;
    u1.id = 104;

    printf("Structure s1: %d %.1f %c\n", s1.id, s1.voltage, s1.status);
    printf("Structure s2: %d %.1f %c\n", s2.id, s2.voltage, s2.status);
    printf("Array : %d %d %d\n", arr[0], arr[1], arr[2]);
    printf("%d",u1.id);
}