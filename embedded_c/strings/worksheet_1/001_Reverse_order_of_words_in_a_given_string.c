/*
Program: Reverse order of words in a given string
     Input: "hello world from C"
     Output: "C from world hello"
*/


#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100], ch;
    puts("enter string :\n");
    fgets(arr, 100, stdin);
    arr[strcspn(arr, "\n")] = '\0';
    int a = strlen(arr);
    char *st = arr;
    char *en = arr + a - 1;
    for (int i = 0; i < (a / 2); i++) 
    {
        char temp = *st;
        *st = *en;
        *en = temp;
        st++;
        en--;
    }
    st = arr;
    for (int i = 0; i <= a; i++) 
    {
        if (arr[i] == ' ' || arr[i] == '\0') 
        {
            en = arr + i - 1;
            char *word = st;
            while (word< en)
            {
                char temp = *word;
                *word = *en;
                *en = temp;
                word++;
                en--;
            }
            st = arr + i + 1; 
        }
    }
    printf("Reversed word order: %s\n", arr);
}
