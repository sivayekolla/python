/*
Remove all duplicate characters from a string, keeping only the first occurrence of each character.
Input: "programming"
Output: "progamin"
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
     char *ump =arr;
     while(*str != '\0')
     {
          int count=0;
          ump=str+1;
         while(*ump != '\0')
         {
          count++;
               if(*str == *ump)
               {
                    memmove(ump+1,ump,strlen(ump));
               }
               else
               ump++;
          } 
          str++;
     }
     printf("%s",arr);
}