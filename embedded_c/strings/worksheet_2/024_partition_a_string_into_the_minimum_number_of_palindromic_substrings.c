/*
Partition a string into the minimum number of palindromic substrings 
(Palindrome Partitioning).
 Input: "ababbbabbababa"
 Output: 3
*/


#include<stdio.h>
#include<string.h>
int main()
{
     char arr[30];int count=0;
     printf("enter a string:\n");
     fgets(arr,30,stdin);
     arr[strcspn(arr,"\n")]='\0';
     char *scar=arr;int s=strlen(arr);
     for(int i=0;i<s;i++)
     {
          if(*(scar) == *(scar+1))
          {
               printf("%c %c\n",*(scar),*(scar+1));
               count++;
          }
          
          scar++;
     }
     printf("%d",count);
}