/*
Remove all occurrence of a word in given string
           Input: "hello world hello universe", remove: "hello"
           Output: "world universe"
*/
#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100], dmn[50];
     puts("enter string :");
     fgets(arr, 100, stdin);
     puts("enter sub string :");
     fgets(dmn, 50, stdin);
     int e = strlen(dmn);
     arr[strcspn(arr, "\n")] = '\0';
     dmn[strcspn(dmn, "\n")] = '\0';
     char *awm = arr, *ump;
     while ((ump = strstr(arr, dmn)) != NULL)
     {
          memmove(ump, ump + e, strlen(ump + e) + 1);
     }

     printf("Output: %s\n", arr);
}
