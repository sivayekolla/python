#include <stdio.h>

int main() 
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    int xor;
    if (n % 4 == 0) xor = n;
    else if (n % 4 == 1) xor = 1;
    else if (n % 4 == 2) xor = n + 1;
    else xor = 0;
    printf("%d\n", xor);
    return 0;
}
