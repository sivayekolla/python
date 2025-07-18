#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
     char arr[100];
     printf("enter a string\n");
     fgets(arr,100,stdin);
     arr[strcspn(arr,"\n")]='\0';
     char *ptr=arr;
     while(*ptr != '\0')
     {
          char g=*ptr;
          if(islower(g))
          {
               g=toupper(g);
          }
          else
          {
               g=tolower(g);
          } 
          *ptr=g;
          ptr++;              
     }
     printf("%s",arr);

}