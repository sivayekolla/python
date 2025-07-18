/*
Find highest frequency character in a string
          Input: "engineering"

          Output: 'e' appears 3 times
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

     printf("'%c' appears %d times\n", fnd, max);
}
