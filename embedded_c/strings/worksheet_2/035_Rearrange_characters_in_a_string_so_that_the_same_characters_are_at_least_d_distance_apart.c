#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[100];
    printf("enter a string:\n");
    scanf("%s", str);

    int d;
    printf("enter distance d:\n");
    scanf("%d", &d);

    int len = strlen(str);
    int freq[256];
    int next[256];

    for(int i = 0; i < 256; i++)
    {
        *(freq + i) = 0;
        *(next + i) = 0;
    }

    for(int i = 0; i < len; i++)
    {
        *(freq + *(str + i)) = *(freq + *(str + i)) + 1;
    }

    char result[100];
    for(int i = 0; i < len; i++)
    {
        *(result + i) = 0;
    }

    for(int i = 0; i < len; i++)
    {
        int max = -1;
        for(int j = 0; j < 256; j++)
        {
            if(*(freq + j) > 0 && *(next + j) <= i)
            {
                if(max == -1 || *(freq + j) > *(freq + max))
                {
                    max = j;
                }
            }
        }

        if(max == -1)
        {
            printf("not possible\n");
            return 0;
        }

        *(result + i) = max;
        *(freq + max) = *(freq + max) - 1;
        *(next + max) = i + d;
    }

    *(result + len) = '\0';
    printf("output:\n%s\n", result);
}
