#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter number of elements:\n");
    scanf("%d", &a);
    int *arr = (int *)malloc(sizeof(int) * a);
    printf("Enter values into array:\n");
    for (int i = 0; i < a; i++) 
    {
        scanf("%d", &arr[i]);
    }
     printf("\n");
     printf("Array after removing duplicates:\n");
    for (int i = 0; i < a; i++) 
    {
        int flag = 0;
       for (int j = 0; j < i; j++) 
       {
            if (*(arr + i) == *(arr + j)) 
            {
                flag = 1;
                break;
            }
        }
        if (!flag) 
        {
            printf("%d ", *(arr + i));
        }
    }

   
}
