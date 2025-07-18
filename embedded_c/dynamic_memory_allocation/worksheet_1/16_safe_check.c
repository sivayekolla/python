#include<stdio.h>
#include<stdlib.h>
 
void main(){
 
        char *ptr=malloc(2000000000);
 
        if(ptr==0){
                printf("memory not allocated \n");
                return;
        }else{
                printf("in program \n");
        }
 
}