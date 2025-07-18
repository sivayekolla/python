/*
15. Compress a string using run-length encoding by 
replacing repeated characters with the character and count.
Input: "aaabbcc"
Output: "a3b2c2"
*/

#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100],arr1[255]={0};
     printf("enter a string:\n");
     fgets(arr,100,stdin);
     arr[strcspn(arr,"\n")]='\0';
     int a=strlen(arr);
     for(int i=0;i<a;i++)
     {
          arr1[(unsigned char)arr[i]]++;
     }
     for(int i=0;i<255;i++)
     {
          if(arr1[i]>0)
          {
               printf("%c %d\n",i,arr1[i]);
          }
     }
}
