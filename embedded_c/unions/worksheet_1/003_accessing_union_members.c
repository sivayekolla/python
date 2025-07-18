#include<stdio.h>
#include<string.h>
union stu
{
     int  a;
     float b;
     char arr[20];
};
int main()
{
     union stu a;
     scanf("%d",&a.a);
     printf("%d",a.a);
     scanf("%f",&a.b);
     printf("%f",a.b);
     fgets(a.arr,20,stdin);
     printf("%s",a.arr);
}