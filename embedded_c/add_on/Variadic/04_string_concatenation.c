#include<stdio.h>
#include<stdarg.h>
#include<string.h>
#include<stdlib.h>

char *concat_strings(int count, ...)
{
    va_list args;
    va_start(args, count);
    int total_len = 1; 
    for (int i = 0; i < count; i++) {
        char *sub = va_arg(args, char*);
        total_len += strlen(sub);
    }
    va_end(args);
    char *str = malloc(total_len);
    if (!str) return NULL;
    str[0] = '\0';
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        char *sub = va_arg(args, char*);
        strcat(str, sub);
    }
    va_end(args);
    return str;
}

int main()
{
    char *str = concat_strings(3, "BitLearn", ".", "Bitsilica");
    printf("%s\n", str);
    free(str);
    return 0;
}