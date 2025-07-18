/*
Count the number of words in a string separated by spaces.
Input: "Hello world"
Output: 2
*/

#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100];
     printf("enter string:\n");
     fgets(arr,100,stdin);
     arr[strcspn(arr,"\n")]='\0';
     char *arr1=arr;int count=0;
     while(*(arr1) != '\0')
     {
          if(*(arr1)!=' ' && *(arr1+1)==' ' || *(arr1+1)== '\0')
          {
               count++;
          }
          arr1++;
     }
     printf("%d",count);
}
