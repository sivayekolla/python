#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void timer_interrupt()
{
     printf("timer_interrupt:\n");
}
void keyboard_interrupt()
{
     printf("keyboard_interrupt:\n");
}
void error_interrupt()
{
     printf("error_interrupt:\n");
}
int main()
{
     void (*fptr[3])()={timer_interrupt,keyboard_interrupt,error_interrupt};
     srand(time(NULL));
     int a=rand()%2+1;
     //fptr[a]();
     switch(a)
     {
          case 1:
               fptr[1]();
               break;
          case 2:
               fptr[2]();
               break;
          case 3:
               fptr[3]();
               break;
     }
}