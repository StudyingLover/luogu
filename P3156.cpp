//
// Created by lenovo on 2022/11/24.
//
#include<bits/stdc++.h>
using namespace std;

inline int read () {
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
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
    int a[n+1];
    int b[m];
    for(i=1;i<=n;i++)
        a[i]=read();
    for(i=0;i<m;i++)
        b[i]=read();
    for(i=0;i<m;i++)
        printf("%d\n",a[b[i]]);
    return 0;
}