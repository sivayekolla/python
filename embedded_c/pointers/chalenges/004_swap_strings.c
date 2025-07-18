#include<stdio.h>
int main()
{
     char arr[100],arr1[100];int c;
     printf("enter two strings:\n");
     fgets(arr,100,stdin);fgets(arr1,100,stdin);
     arr[strcspn(arr,"\n")]='\0';arr1[strcspn(arr1,"\n")]='\0';
     if(strlen(arr)>strlen(arr1))
     c=strlen(arr);
     if(strlen(arr1)>strlen(arr))
     c=strlen(arr1);
     if(strlen(arr1)==strlen(arr))
     c=strlen(arr1);
     check(arr,arr1,c);
     printf("%s\n%s",arr,arr1);

}
int check(char *arr,char *arr1,int c)
{
     char temp;
     for(int i=0;i<c;i++)
     {
          temp=*arr;
          *arr=*arr1;
          *arr1=temp;
          arr++;arr1++;
     }
}