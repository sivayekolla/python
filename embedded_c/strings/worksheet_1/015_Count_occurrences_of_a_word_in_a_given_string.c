/*
Count occurrences of a word in a given string
          Input: "hi hello hi hey hi", word: "hi"

         Output: 3
*/
#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100],ch[20];
     puts("enter string :\n");
     fgets(arr,100,stdin);
     puts("enter sub string :\n");
     fgets(ch,20,stdin);
     arr[strcspn(arr,"\n")]='\0';
     ch[strcspn(ch,"\n")]='\0';
     char *ptr=arr;
     int count=0,b=strlen(ch);
     while(*ptr != '\0')
     {
          ptr=strstr(arr,ch);
          if(*ptr != NULL)
          {
               count++;
               ptr=ptr+b;
          }
          else 
          {
               break;
          }
     }
     printf("%d :times the substring appierd",count);

}
