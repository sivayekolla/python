/*
Print all characters that occur more than once in a string.
Input: "programming"
Output: r g m
*/



#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[100];
    printf("enter a string:\n");
    scanf("%s", str);

    int count[256];
    for(int i = 0; i < 256; i++)
    {
        *(count + i) = 0;
    }

    for(int i = 0; *(str + i) != '\0'; i++)
    {
        *(count + *(str + i)) = *(count + *(str + i)) + 1;
    }

    printf("duplicate characters:\n");
    for(int i = 0; i < 256; i++)
    {
        if(*(count + i) > 1)
        {
            printf("%c ", i);
        }
    }

    printf("\n");
}
