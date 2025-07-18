/*
Find the character that appears most frequently in the input string and print it.
Input: "sample string"
Output: 's'
*/
#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100], ch, fnd;
     puts("enter string :\n");
     fgets(arr, 100, stdin);
     arr[strcspn(arr, "\n")] = '\0';

     int p = strlen(arr);
     int max = -1;

     for (int i = 0; i < p; i++)
     {
          char *ptr = arr;
          int count = 0;
          ch = arr[i];

          while (*ptr != '\0')
          {
               if (*ptr == ch)
               {
                    count++;
               }
               ptr++;
          }

          if (count > max)
          {
               max = count;
               fnd = ch;
          }
     }

     printf("'%c' \n", fnd);
}
