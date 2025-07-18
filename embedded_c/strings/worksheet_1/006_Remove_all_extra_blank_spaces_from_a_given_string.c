/*
Remove all extra blank spaces from a given string
         Input: " This is     ChatGPT "

         Output: "This is ChatGPT"
*/


#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100], ch, fnd;
     puts("enter string :\n");
     fgets(arr, 100, stdin);
     arr[strcspn(arr, "\n")] = '\0';
     char *str = arr;
     int p = strlen(arr);

     while (*str != '\0')
     {
          if (*str == ' ' && *(str + 1) == ' ')
          {
               memmove(str, str + 1, p);
          }
          else
          {
               str++;
          }
          p = strlen(arr);
     }
     str = arr;
     while (*str == ' ')
     {
         memmove(str, str + 1, strlen(arr));
     }

     int len = strlen(arr);
     

     printf("Output:\n%s\n", arr);
}
