/*
 Replace first occurrence of a character with another in a string
         Input: "google", replace 'o' with 'a'

         Output: "gagole"


*/
#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100],ch,ch1;
     puts("enter string :\n");
     fgets(arr,100,stdin);
     arr[strcspn(arr,"\n")]='\0';
     puts("enter charecter to find first position :\n");
     scanf("%c",&ch);
     getchar();
     puts("enter charecter to find first position :\n");
     scanf("%c",&ch1);
     char *ptr=arr;
     int b;
     while(*ptr != '\0')
     {
          
          if(*ptr==ch)
          {
               *ptr=ch1;
               break;
          }
          ptr++;
     }
     printf("%s",arr);
}