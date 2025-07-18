/*
Print the reverse of a string using recursion.
Input: "hello"
Output: "olleh"
*/


#include<stdio.h>
#include<string.h>
void mania(char *arr1);
int main()
{
     char arr[100];
     puts("enter string :\n");
     fgets(arr, 100, stdin);
     arr[strcspn(arr, "\n")] = '\0';
     mania(arr);
}
void mania(char *arr1)
{
     if(*arr1 == '\0')
     {
          return ;
     }
     else
     {
          mania(arr1+1);
          printf("%c",*arr1);
     
     }
}