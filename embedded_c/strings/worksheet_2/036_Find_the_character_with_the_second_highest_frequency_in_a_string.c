/*
Find the character with the second highest frequency in a string.
Input: "aabababa"
Output: 'b'
*/
#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100];
     char arr1[255];
     int max2=arr1[0];
     int max=0,min=arr1[0];char m;
     printf("enter a string:\n");
     fgets(arr,100,stdin);
     for(int i=0;i<255;i++)
     {
          arr1[(unsigned char)arr[i]]++;
     }
     for(int i=0;i<255;i++)
     {
          for(int j=0;j<255;i++)
          {
               if(arr1[i]>max)
               {
                    max=arr1[i];
               }
               if(arr1[i]<min)
               {
                    min=arr1[i];
               }
          }
     }
      for(int i=0;i<255;i++)
     {
          if(arr1[i]>max2 && arr1[i]<(max))
          {
               max2=arr1[i];
          }
     }
    for(int i=0; i<255; i++)
     {
          if(arr1[i] == max2)
          {
               m = i;
               break;
          }
     }
     printf("%c %d",m,max2);
     
}
