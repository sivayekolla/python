#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
     char temp[100];
     printf("Enter a string:\n");
     fgets(temp, 100, stdin);
     int len = strlen(temp);
     char *arr = (char *)malloc(len + 1); 
     strcpy(arr, temp);  
     char *resized = (char *)realloc(arr, len + 1);
     arr = resized;
     printf("String length: %u\n", strlen(arr));
     printf("String: %s\n", arr);
     free(arr);
     return 0;
}