//
// Created by lenovo on 2022/11/14.
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    scanf("%d", &r);
    int n=r;
    int i,j,k;
    int a[101][101];
    int dp[101][101];
    for(i=0;i<101;i++)
    {
        dp[0][i]=0;
    }
    for(i=0;i<101;i++)
    {
        dp[i][0]=0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
//          printf("*");
            scanf("%d", &a[i][j]);
        }
//        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+a[i][j];
        }
    }
    int max=0;
    for(i=1;i<=n;i++)
    {
        if(dp[n][i]>max)
        {
            max=dp[n][i];
        }
    }
    printf("%d", max);
}