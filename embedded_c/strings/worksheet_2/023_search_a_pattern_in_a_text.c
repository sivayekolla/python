/*
Implement Boyer-Moore pattern searching algorithm with bad character heuristic to search a pattern in a text.
Input: Text = "here is a simple example", Pattern = "example"
Output: Pattern found at index 17
*/




#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100],arr1[100];
     printf("enter 2 string:\n");
     fgets(arr,100,stdin);fgets(arr1,100,stdin);
     arr[strcspn(arr,"\n")]='\0';arr1[strcspn(arr1,"\n")]='\0';
     char *ppt;
     if(ppt=strstr(arr,arr1))
     {
          int a=ppt-arr;
          printf("%d",a);
     }

}