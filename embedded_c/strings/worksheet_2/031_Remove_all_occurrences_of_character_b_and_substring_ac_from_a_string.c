#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100];
     printf("enter a string:\n");
     fgets(arr,100,stdin);
     arr[strcspn(arr,"\n")]='\0';
     char ump='b',ak='c',awm='a';
     char *uzi=arr;
     while(*uzi != '\0')
     {
          if(*uzi==ump)
          {
               memmove(uzi, uzi+1, strlen(uzi));
          }
          else if(*uzi==awm && *(uzi+1)==ak)
          {
               memmove(uzi, uzi+2, strlen(uzi)-1);
          }
          else
          {
               uzi++;
          }
     }
     printf("%s",arr);
}
