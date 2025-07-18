#include<stdio.h>
#include<stdlib.h>
 
void main(){
        int i=0;
        int **p;
        int k=0;
        int n;
        printf("enter number of pointer :");
        scanf("%d", &n);
        p=malloc(sizeof(int)*n);
 
        for(i=0;i<n;i++){
                p[i]=malloc(sizeof(int));
                p[i][0]=k++;
        }
 
        for(i=0;i<n;i++){
                printf("%d\t",p[i][0]);
        }
        free(p);
}