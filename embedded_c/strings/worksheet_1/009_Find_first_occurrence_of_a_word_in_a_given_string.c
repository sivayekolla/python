/*
Find first occurrence of a word in a given string
         Input: "this is a test string", word: "test"

         Output: Found at position 11


*/
#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100],ch[20];
     puts("enter string :");
     fgets(arr, 100, stdin);
     arr[strcspn(arr, "\n")] = '\0';
     puts("enter sub string :");
     fgets(ch, 20, stdin);
     ch[strcspn(ch, "\n")] = '\0';
     char *awm=strstr(arr,ch);
     int p=awm-arr;
     printf("%d",(p+1));
     
}