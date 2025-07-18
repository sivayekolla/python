#include<stdio.h>
#include<stdlib.h>
void is_even(int *arr,int a)
{
     for(int i=0;i<a;i++)
     {
          if((arr[i]%2)==0)
          {
               printf("%d\t",arr[i]);
          }
     }
}
void is_odd(int *arr,int a)
{
     for(int i=0;i<a;i++)
     {
          if((arr[i]%2)!=0)
          {
               printf("%d\t",arr[i]);
          }
     }
}
int main()
{
     int a;
     printf("enter no of elements to array:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter elements in array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     int b;
     printf("enter a  value: \n1.even\n2.odd\n");
     scanf("%d",&b);
     void(*find[2])()={is_even,is_odd};
     switch(b)
     {
          case 1:
               find[0](arr,a);
               break;
          case 2:
               find[1](arr,a);
               break;
     }
}