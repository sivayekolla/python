/*
Reverse a string without using library functions
         Input: "OpenAI"
          Output: "IAnepO"
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


    for (int i = 0; i < (a / 2); i++) {
        char temp = *st;
        *st = *en;
        *en = temp;
        st++;
        en--;
    }
    printf("output :\n");
    st=arr;
    while(*st != '\0')
    {
     printf("%c",*st);
     st++;
    }
}