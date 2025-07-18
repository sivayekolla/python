#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100];
     printf("enter a string:\n");
     fgets(arr,100,stdin);
     arr[strcspn(arr,"\n")]='\0';
     char *ptr=arr;
     int a=strlen(arr);
     for(int i=0;i<a;i++)
     {
          int count=0;
          for(int j=0;j<a;j++)
          {
               if(i!=j)
               {
                    if(*(arr+i) == *(arr+j))
                    {
                         count++; 
                    }
               }
          }
          if(count==0)
          {
               printf("%c",*(arr+i));
               break;
          }
     }
}