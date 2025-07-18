/*
Swap the contents of two strings . The strings values should be exchanged completely.
Input: str1 = "hello", str2 = "world"
Output: str1 = "world", str2 = "hello"
*/



#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100];
     char arr1[100];
     char temp[100];
     printf("enter two strings:\n");
     fgets(arr,100,stdin);
     fgets(arr1,100,stdin);
     arr[strcspn(arr,"\n")]='\0';
     arr1[strcspn(arr,"\n")]='\0';
     strcpy(temp,arr);
     strcpy(arr,arr1);
     strcpy(arr1,temp);
     printf("\n\n%s :string 1\n",arr);
     printf("%s :string 2",arr1);

}