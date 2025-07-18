#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,count=0;
     int arr1[10],k=0;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     for(int i=0;i<a;i++)
     {
          int flag=0;
          count=0;
          for(int j=0;j<a;j++)
          {
               if(arr[i]==arr[j])
               {
                    count++;
               }
          }
          if(count%2==0)
          {
             for(int m=0;m<k;m++)
             {
               if(arr1[m]==arr[i])
               {
                    flag=1;
                    break;
               }
             } 
             if(flag==0)
             {
               arr1[k]=arr[i];
               k++;
             } 
          }
     }
     for(int i=0;i<k;i++)
     {
     printf("%d ",arr1[i]);
     }
     free(arr);
     return 0;
}
