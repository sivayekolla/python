#include<stdio.h>
#include<math.h>
#include<unistd.h>
int double_value(int a)
{
     printf("the double value of %d is:\n",a);
    return a*2;
}
int increment(int a)
{
     printf("the increment value of %d is:\n",a);
     return ++a;
}
int square(int a)
{
     printf("the square value of %d is:\n",a);
     return pow(a,2);
}
int main()
{
     int a;
     printf("enter a number:\n");
     scanf("%d",&a);
     int c;
     int (*fptr[3])()={double_value,increment,square};
     for(int i=0;i<3;i++)
     {
          sleep(3);
          c=fptr[i](a);
          printf("%d\n",c);
          
     }

}
