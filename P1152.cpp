//
// Created by lenovo on 2022/11/24.
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
    register int n,i,j,k;
    n=read();
    int a[n];
    for(i=0;i<n;i++)
        a[i]=read();
//    sort(a,a+n);
    int b[n];
    for(i=0;i<n-1;i++)
    {
        b[i]=abs(a[i+1]-a[i]);
    }
    sort(b,b+n-1);
    for(i=1;i<n;i++)
    {
        if(b[i-1]!=i)
        {
            cout<<"Not jolly";
            return 0;
        }
//          printf("%d ",b[i-1]);
    }
    cout<<"Jolly";

    return 0;
}