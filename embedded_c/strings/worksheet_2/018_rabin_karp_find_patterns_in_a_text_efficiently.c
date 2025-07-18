#include<string.h>
#include<stdio.h>
int main()
{
     char arr[100],arr1[100];char *max;int min;
     printf("enter a string and sub_string:\n");
     fgets(arr,100,stdin);fgets(arr1,100,stdin);
     arr[strcspn(arr,"\n")]='\0';arr1[strcspn(arr1,"\n")]='\0';
     if(max=strstr(arr,arr1))
     {
          min=max-arr;
     }
     printf("%d",min);
}     