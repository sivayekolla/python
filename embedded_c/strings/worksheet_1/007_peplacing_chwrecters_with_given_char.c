/*
Replace all occurrences of a character with another in a string
         Input: "banana", replace 'a' with 'o'

         Output: "bonono"
*/

#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100],ch,ch1;
     puts("enter string :\n");
     fgets(arr,100,stdin);
     arr[strcspn(arr,"\n")]='\0';
     puts("enter charecter to be replaced :\n");
     scanf("%c",&ch);
     getchar();
     puts("enter charecter to replace :\n");
     scanf("%c",&ch1);
   
     char *ptr=arr;
     while( *ptr != '\0')
     {
          if(*ptr==ch)
          {
               *ptr = ch1;
          }
          ptr++;
     }
     printf("%s",arr);

}