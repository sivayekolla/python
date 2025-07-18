/*
Find first occurrence of a character in a given string
       Input: "elephant", find 'e'

        Output: Position: 0


*/


#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100],ch;
     puts("enter string :\n");
     fgets(arr,100,stdin);
     arr[strcspn(arr,"\n")]='\0';
     puts("enter charecter to find :\n");
     scanf("%c",&ch);
     int a =-1;
     char *ptr=arr;
     while( *ptr != '\0')
     {
          a++;
          if(*ptr==ch)
          {
               break;
          }
          ptr++;
     }
     printf("%d",a);

}