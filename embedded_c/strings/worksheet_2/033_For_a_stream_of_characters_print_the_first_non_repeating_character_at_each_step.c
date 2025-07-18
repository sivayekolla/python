/*
For a stream of characters, print the first non-repeating character at each step.
Input stream: "aabc"
Output: "a a b b"
*/


#include<stdio.h>
#include<string.h>

int main()
{
    char arr[30], arr1[30];
    int freq[256] = {0};
    int k = 0;

    printf("enter string:\n");
    fgets(arr, 30, stdin);
    arr[strcspn(arr, "\n")] = '\0';

    int a = strlen(arr);

    for(int i = 0; i < a; i++)
    {
        char ch = arr[i];
        freq[ch]++;

        if(freq[ch] == 1)
        {
            arr1[k++] = ch;
        }

        int found = 0;
        for(int j = 0; j < k; j++)
        {
            if(freq[arr1[j]] == 1)
            {
                printf("%c ", arr1[j]);
                found = 1;
                break;
            }
        }

        if(!found)
        {
            printf("-1 ");
        }
    }

    return 0;
}
