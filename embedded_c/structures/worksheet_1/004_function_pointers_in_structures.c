#include<stdio.h>
#include<unistd.h>
struct stu
{
     int a;
     int  (*sum)(int,int);
};
int add(int a,int b)
{
     return a+b;
}
int main()
{
     struct stu ump;
     ump.a=10;
     ump.sum=add;
     printf("%d",ump.sum(2,3));

}
