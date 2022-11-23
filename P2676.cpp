//
// Created by lenovo on 2022/11/23.
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

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int n,m;
    n=read();
    m=read();
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=read();
    }
    sort(a,a+n,compare);
    int sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        count++;
        if(sum>m)
        {
            break;
        }

    }
    cout<<count;
    return 0;
}