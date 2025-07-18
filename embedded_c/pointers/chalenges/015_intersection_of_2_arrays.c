#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b;
     printf("enter no of elements in arr1:\n");
     scanf("%d",&a);
     printf("enter no of elements in arr2:\n");
     scanf("%d",&b);
     int *arr1=(int *)malloc(sizeof(int)*a);
     int *arr2=(int *)malloc(sizeof(int)*b);
     printf("enter then values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr1[i]);
     }
     for(int i=0;i<b;i++)
     {
          scanf("%d",&arr2[i]);
     }
     printf("\n");
     int arr3[20],l=0,flag=0;
     int *app=arr1;
     int *app1=arr2;
     for(int i=0;i<a;i++)
     {
          for(int j=0;j<a;j++)
          {
               
               
                    if(*app==*app1)
                    {
                         flag=0;
                         for(int h=0;h<l;h++)
                         {
                              if(arr3[h]==*app)
                              {
                                   flag=1;
                                   break;
                              }
                         }
                         if(flag==0)
                         {
                              arr3[l]=*app;
                              l++;
                         }
                         break;
                    }
                    app1++;
               
          }
          app++;
     }
     printf("Total intersection elements: %d\n",l);
     for(int i=0;i<l;i++)
     {
          printf("%d",arr3[i]);
     }
     
}