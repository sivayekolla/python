/*
Check if two strings are anagrams of each other by comparing character counts.
Input: "listen", "silent"
Output: True
*/

#include<stdio.h>             
#include<string.h>
int main()
{
     char arr[100];
     char arr1[100];
     printf("enter 2 strings");
     fgets(arr,100,stdin);fgets(arr1,100,stdin);
     arr[strcspn(arr,"\n")]='\0';arr1[strcspn(arr1,"\n")]='\0';
     int a=strlen(arr);int b=strlen(arr1);int count=0;
     if(a!=b)
     {
          printf("not an anagram\n");
          return 0;
     }
     for(int i=0;i<a;i++)
     {
          for(int j=0;j<b;j++)
          {
               if(arr[i]==arr1[j])
               {
                    count++;
                    break;
               }
          }
     }
     if(a==count)
     {
          printf("its an anagram:\ttrue\n");
     }
     else
     {
          printf("its not an anagram:\tfalse");
     }
}