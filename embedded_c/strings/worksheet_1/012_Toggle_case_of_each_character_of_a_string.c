/*
Toggle case of each character of a string
         Input: "HeLLo"

         Output: "hEllO"


*/


#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
     char arr[100], ch, fnd;
     puts("enter string :\n");
     fgets(arr, 100, stdin);
     arr[strcspn(arr, "\n")] = '\0';
     char *amb=arr;
     while(*amb != '\0')
     {
          if(isupper(*amb))
          {
               *amb=tolower(*amb);
          }
           if(islower(*amb))
          {
               *amb=toupper(*amb);
          }
          amb++;
     }
     printf("%s",arr);
}