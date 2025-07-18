/*
Find the first non-repeating character in a string and print it.
Input: "swiss"
Output: 'w'
*/
#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100], ch;
     puts("enter string :\n");
     fgets(arr, 100, stdin);
     arr[strcspn(arr, "\n")] = '\0';
     int count=0;
     int p = strlen(arr);
     for(int i=0;i<p;i++)
     {
          count=0;
          for(int j=0;j<p;j++)
          {
               if(i!=j)
               {
                    if(arr[i]==arr[j])
                    {
                         count++;
                    }
               }
          }
          if(count==0)
          {
               printf("%c",arr[i]);
               break;
          }
     }

}