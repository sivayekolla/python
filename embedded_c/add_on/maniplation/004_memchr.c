#include<stdio.h>
#include<string.h>

int main()
{
     char arr[30] = "yebibfdhbcefgyfbchg";
     char *p = arr;
     char u = 'i';
     int count = 0;

     while ((p = memchr(p, u, strlen(p))) != NULL)
     {
          count++;
          p++; 
     }

     printf("%d", count);
}
