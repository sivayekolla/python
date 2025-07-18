#include<stdio.h>
#include<stdlib.h>
struct Dangling {
    int *ptr;
};
int main()
{

struct Dangling d;
free(d.ptr);
printf("%d", *(d.ptr)); // Undefined behavior
}
/*this code demonstrating that how 
it behaves:abort mode while debugging*/