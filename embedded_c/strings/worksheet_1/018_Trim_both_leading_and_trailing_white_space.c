#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100];int count=0;
     puts("enter string :");
     fgets(arr, 100, stdin);
     arr[strcspn(arr, "\n")] = '\0';
     char *awm=arr;

     if(*awm == ' ')
     {
          memmove(awm,awm+1,strlen(arr));
     }

     int len = strlen(arr);
     if(arr[len - 1]== ' ')
     {
          arr[len - 1] = '\0';
     }

     printf("%s",arr);
}
