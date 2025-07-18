/*
 Find last occurrence of a character in a string
        Input: "ababcabc", find 'b'

        Output: Position: 6
*/
#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100],ch;
     puts("enter string :\n");
     fgets(arr,100,stdin);
     arr[strcspn(arr,"\n")]='\0';
     puts("enter charecter to find last position :\n");
     scanf("%c",&ch);
     getchar();
     char *ptr=arr;
     int a=-1,b;
     while(*ptr != '\0')
     {
          a++;
          if(*ptr==ch)
          {
               b=a;
          }
          ptr++;
     }
     printf("%d",b);
}