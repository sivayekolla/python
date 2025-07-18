#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100],arr1[100];
     printf("enter two string:\n");
     fgets(arr,100,stdin);fgets(arr1,100,stdin);
     arr[strcspn(arr,"\n")]='\0';arr1[strcspn(arr1,"\n")]='\0';
     int a;char *ptr;
     ptr=strstr(arr,arr1);
     
          a=ptr-arr;
     
     printf("found:%d",a);
}