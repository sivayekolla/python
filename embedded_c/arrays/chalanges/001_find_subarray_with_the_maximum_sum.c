/*Find the subarray with the maximum sum (Kadane’s Algorithm)
Implement an efficient algorithm to find the contiguous subarray within a one-dimensional array of numbers that has the largest sum.

Example: Input: [-2, 1, -3, 4, -1, 2, 1, -5, 4]
Output: 6 (subarray: [4, -1, 2, 1])*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter number of elements:\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    printf("enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    int max = *arr;
    int curr = *arr;
    for(int i = 1; i < n; i++)
    {
        if(curr + *(arr + i) > *(arr + i))
        {
            curr = curr + *(arr + i);
        }
        else
        {
            curr = *(arr + i);
        }
        if(curr > max)
        {
            max = curr;
        }
    }
    printf("maximum subarray sum is: %d\n", max);
}
