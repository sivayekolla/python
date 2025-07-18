#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void init()
{
     printf("state initialized:\n");
}
void run()
{
     printf("running state:\n");
}
void stop()
{
     printf("stopped state:\n");
}
void error()
{
     printf("error state:\n");
}
int main()
{
     void (*fptr[4])()={init,run,stop,error};
     srand(time(NULL));
     int a=rand()%3+1;
     fptr[0]();
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