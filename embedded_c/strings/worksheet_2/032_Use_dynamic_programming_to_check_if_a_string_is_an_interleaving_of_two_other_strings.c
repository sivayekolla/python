/*
Use dynamic programming to check if a string is an interleaving of two other strings.
Input: s1 = "abc", s2 = "def", s3 = "adbcef"
Output: True
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s1[100], s2[100], s3[200];
    printf("enter s1:\n");
    scanf("%s", s1);
    printf("enter s2:\n");
    scanf("%s", s2);
    printf("enter s3:\n");
    scanf("%s", s3);

    int l1 = strlen(s1);
    int l2 = strlen(s2);
    int l3 = strlen(s3);

    if(l1 + l2 != l3)
    {
        printf("False\n");
        return 0;
    }

    int dp[l1 + 1][l2 + 1];
    for(int i = 0; i <= l1; i++)
    {
        for(int j = 0; j <= l2; j++)
        {
            if(i == 0 && j == 0)
            {
                dp[i][j] = 1;
            }
            else if(i == 0)
            {
                dp[i][j] = dp[i][j - 1] && s2[j - 1] == s3[i + j - 1];
            }
            else if(j == 0)
            {
                dp[i][j] = dp[i - 1][j] && s1[i - 1] == s3[i + j - 1];
            }
            else
            {
                dp[i][j] = (dp[i - 1][j] && s1[i - 1] == s3[i + j - 1]) || (dp[i][j - 1] && s2[j - 1] == s3[i + j - 1]);
            }
        }
    }

    if(dp[l1][l2])
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}
