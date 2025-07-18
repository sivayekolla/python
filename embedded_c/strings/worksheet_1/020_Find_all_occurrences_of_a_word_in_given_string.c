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
     char *awm1=arr,*awm;
     while(*awm != '\0')
     {
          if(awm1=strstr(arr,ch))
          {
          awm=strstr(arr,ch);
     int p=awm-arr;
     awm=arr+p;
     printf("%d",(p+1));
     }
     }
}