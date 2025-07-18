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
     printf("%lu",sizeof(a));
}
