/*
Check whether a given string is a palindrome, i.e., it reads the same forwards and backwards.
Input: "madam"
Output: Palindrome
*/
#include<stdio.h>
#include<string.h>
main()
{
     char a[30];
     puts("enter a string:");
     gets(a);
     //printf("%d",sizeof(*c));
     char *p,*q;
     p=a;q=a+strlen(a)-1;
     printf("%c %c",*p,*q);
     int count=0,w;
     //if(==1)
    // {
     w=((strlen(a)/2));
    // }
     /*else
     {
           w=((strlen(a)/2));
     }*/

     
     printf("%d\n",w);
     
     for(int i=0;i<w;i++)
     {
          if(*p==*q)
          {
               count++;
               p++;
               q--;
          }
     }
     if(count==w)
     {
          printf("the given string is a palindrome");
     }
     else
     
     {
          printf("the given string is not a palindrome");
     }
}