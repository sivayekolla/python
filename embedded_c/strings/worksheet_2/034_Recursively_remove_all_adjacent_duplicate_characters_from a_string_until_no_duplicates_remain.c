/*
Recursively remove all adjacent duplicate characters from a string until no duplicates remain.
Input: "azxxzy"
Output: "ay"
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("enter string:\n");
    scanf("%s", str);

    int change = 1;
    while(change)
    {
        change = 0;
        char temp[100];
        int i = 0, j = 0;
        while(str[i] != '\0')
        {
            if(str[i] == str[i+1])
            {
                change = 1;
                while(str[i] == str[i+1])
                {
                    i++;
                }
                i++;
            }
            else
            {
                temp[j++] = str[i++];
            }
        }
        temp[j] = '\0';
        strcpy(str, temp);
    }

    printf("output:\n%s\n", str);
}
