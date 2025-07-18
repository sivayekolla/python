/*
Find lowest frequency character in a string
          Input: "engineering"
         Output: 'g', 'r', 'n' each appear once
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
     int min = 0;

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

          if (count >=1)
          {
               min = count;
               fnd = ch;
               printf("'%c' appears %d times\n", fnd, min);
          }
     }

}