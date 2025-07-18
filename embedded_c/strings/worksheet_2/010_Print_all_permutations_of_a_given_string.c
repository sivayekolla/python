#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[100];
    printf("enter string:\n");
    scanf("%s", str);

    int len = strlen(str);

    for(int i = 0; i < len - 1; i++)
    {
        for(int j = i + 1; j < len; j++)
        {
            if(str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    int fin = 0;
    while(!fin)
    {
        printf("%s\n", str);

        int i = len - 2;
        while(i >= 0 && str[i] >= str[i + 1])
        {
            i--;
        }

        if(i < 0)
        {
            fin = 1;
        }
        else
        {
            int j = len - 1;
            while(str[j] <= str[i])
            {
                j--;
            }

            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;

            int start = i + 1;
            int end = len - 1;
            while(start < end)
            {
                char t = str[start];
                str[start] = str[end];
                str[end] = t;
                start++;
                end--;
            }
        }
    }
}
