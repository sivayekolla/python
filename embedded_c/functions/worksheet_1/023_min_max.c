#include <stdio.h>
#include <stdlib.h>

int* find_max(int *arr, int size);
int* find_min(int *arr, int size);

int main()
{
    int a;
    printf("enter no of elements:\n");
    scanf("%d", &a);

    int *arr = (int *)malloc(sizeof(int) * a);
    printf("enter the values to array:\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n\n");

    int *max = find_max(arr, a);
    int *min = find_min(arr, a);

    printf("max: %d and min: %d", *max, *min);

    free(arr);
    return 0;
}


int* find_max(int *arr, int size)
{
    int *max = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(max) < *(arr + i))
        {
            max = arr + i;
        }
    }
    return max;
}


int* find_min(int *arr, int size)
{
    int *min = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(min) > *(arr + i))
        {
            min = arr + i;
        }
    }
    return min;
}
