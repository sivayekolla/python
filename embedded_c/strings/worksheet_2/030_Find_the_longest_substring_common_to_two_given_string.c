#include <stdio.h>
#include <string.h>

int main() {
     printf("enter 2 strings:\n");
    char s1[100]; 
    char s2[100];
    fgets(s1,100,stdin);
    fgets(s2,100,stdin);
    s1[strcspn(s1,"\n")]='\0';
    s2[strcspn(s2,"\n")]='\0';
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int dp[100][100];
    int i = 0, j = 0, max = 0, end = 0;

    for(i = 0; i < len1; i++) {
        for(j = 0; j < len2; j++) 
        {
            if(s1[i] == s2[j]) 
            {
                if(i == 0 || j == 0)
                    dp[i][j] = 1;
                else
                    dp[i][j] = dp[i-1][j-1] + 1;
                if(dp[i][j] > max) {
                    max = dp[i][j];
                    end = i;
                }
            } 
            else 
            {
                dp[i][j] = 0;
            }
        }
    }

    for(i = end - max + 1; i <= end; i++) {
        printf("%c", s1[i]);
    }

    return 0;
}
