#include<stdio.h>
#include<stdarg.h>

void my_printf(int count, ...)
{
    va_list args;
    va_start(args, count);
    printf("The values are: ");
    for (int i = 0; i < count; i++)
    {
        int val = va_arg(args, int);
        printf("%d ", val);
    }
    printf("\n");
    va_end(args);
}

int main()
{
    my_printf(3, 10, 20, 30);
    return 0;
}