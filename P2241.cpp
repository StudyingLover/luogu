//
// Created by lenovo on 2022/11/25.
//
#include<bits/stdc++.h>
using namespace std;

inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}

int main()
{
    register int n,m,i,j,k;
    n=read();
    m=read();
    long long count1=0,count2=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            count1+=min(i,j);
            count2+=i*j;
        }
    }
    printf("%lld %lld",count1,count2-count1);
    return 0;
}