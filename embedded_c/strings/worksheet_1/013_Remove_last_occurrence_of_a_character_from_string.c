/*
Remove last occurrence of a character from string
          Input: "mississippi", remove 's'


 
          Output: "missipippi"
*/


#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100], ch, fnd;
     puts("enter string :\n");
     fgets(arr, 100, stdin);
     arr[strcspn(arr, "\n")] = '\0';
     puts("enter the charecter to remove in its last position:");
     scanf("%c",&ch);
     char *str = arr;
     int f=strlen(arr);
     int p = strlen(arr);
     char *ibm=NULL;
       while(*str != '\0')
          {
               if(*str == ch)
               {
                    ibm=str;
                   
               }
               str++;
          }

               memmove(ibm, ibm + 1, strlen(ibm));
     
     

     printf("Output:\n%s\n", arr);
}
