/*
Count total number of words in a string
          Input: "C programming is fun"

          Output: 4
*/

#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100];int count=0;
     puts("enter string :");
     fgets(arr, 100, stdin);
     arr[strcspn(arr, "\n")] = '\0';
     char *awm=arr;
     while(*awm != '\0')
     {
          if(*awm != ' ' && *(awm+1)== ' ')
          {
               count++;
               
          }
          awm++;
          

     }
     printf("%d",count);


}