#include<stdio.h>
int main()
{
    const char *file="temp.txt";
    if(remove(file)==0)
    {
        printf("file deleted successfully");
    }
    else{
        printf("error:unable to delete");
    }
}