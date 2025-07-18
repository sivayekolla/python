#include <stdio.h>

int main() {
    int num, is_power = 0;
    scanf("%d", &num);
    if (num > 0) 
    {
        if ((num & (num - 1)) == 0) 
        {
            if ((num & 0x55555555) != 0) 
            {
                is_power = 1;
            }
        }
    }
    if (is_power) 
    {
        printf("YES\n");
    } 
    else {
        printf("NO\n");
    }
    return 0;
}
