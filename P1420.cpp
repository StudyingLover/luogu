//
// Created by lenovo on 2022/11/10.
//
#include<bits/stdc++.h>
using namespace std;
#define ll  long long

int main()
{
    int n;
    scanf("%d",&n);
    unsigned long long a[n];
    int i,j,k;
    int ans=0;
    for(i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
    }
    int dp[100001];
    dp[0]=1;
    for(i=0;i<n;i++)
    {
        if (a[i] > a[i - 1]&&a[i]==a[i-1]+1) {
            dp[i] = dp[i - 1] + 1;
        } else {
            dp[i] = 1;
        }
        ans=max(ans,dp[i]);
    }
    printf("%d",ans);
    return 0;
}