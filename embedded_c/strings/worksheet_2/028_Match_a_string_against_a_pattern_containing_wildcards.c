#include<stdio.h>
#include<string.h>

int main()
{
    char pat[100], str[100];
    int dp[101][101];
    printf("enter pattern:\n");
    fgets(pat,100,stdin);
    pat[strcspn(pat,"\n")] = '\0';
    printf("enter string:\n");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")] = '\0';

    int m = strlen(pat);
    int n = strlen(str);

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 && j==0) dp[i][j] = 1;
            else if(i==0) dp[i][j] = 0;
            else if(j==0)
            {
                int allStar = 1;
                for(int k=0;k<i;k++)
                {
                    if(pat[k]!='*')
                    {
                        allStar = 0;
                        break;
                    }
                }
                dp[i][j] = allStar;
            }
            else if(pat[i-1]=='*') dp[i][j] = dp[i-1][j] || dp[i][j-1];
            else if(pat[i-1]=='?' || pat[i-1]==str[j-1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = 0;
        }
    }

    if(dp[m][n]) printf("Match");
    else printf("No Match");
}
