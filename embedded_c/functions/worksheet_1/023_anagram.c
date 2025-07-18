#include <stdio.h>
#include <string.h>


int man(char *str, char *str1, int v, int w);

int main()
{
    char arr[100];
    char arr1[100];

    printf("Enter 2 strings:\n");
    fgets(arr, 100, stdin);
    fgets(arr1, 100, stdin);

   
    arr[strcspn(arr, "\n")] = '\0';
    arr1[strcspn(arr1, "\n")] = '\0';

    int a = strlen(arr);
    int b = strlen(arr1);

    int m = man(arr, arr1, a, b);

    if (m)
        printf("It's an anagram: true\n");
    else
        printf("It's not an anagram: false\n");

    return 0;
}

int man(char *str, char *str1, int v, int w)
{
    int count = 0;

    if (v != w)
    {
        printf("Not an anagram (length mismatch)\n");
        return 0;
    }

    for (int i = 0; i < v; i++)
    {
        int found = 0;
        for (int j = 0; j < w; j++)
        {
            if (str[i] == str1[j])
            {
                found = 1;
                str1[j] = 0; 
                break;
            }
        }
        if (!found)
            return 0;
    }

    return 1;
}
