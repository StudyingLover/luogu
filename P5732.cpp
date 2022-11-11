//
// Created by lenovo on 2022/11/10.
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dp[101][101];
    dp[1][1]=1;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        dp[i][1]=1;
        dp[i][i]=1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
    return 0;
}
