#include<stdio.h>
#include<stdarg.h>
#include<string.h>

int count_characters(int count, ...)
{
    va_list args;
    va_start(args, count);
    int len = 0;
    for (int i = 0; i < count; i++)
    {
        char *str = va_arg(args, char *);
        len += strlen(str);
    }
    va_end(args);
    return len;
}

int main()
{
    printf("%d", count_characters(3, "BitLearn", ".", "Bitsilica"));
    return 0;
}