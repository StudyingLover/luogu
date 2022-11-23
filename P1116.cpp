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
int main()
{
    register int n,i,j,k;
    n=read();
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=read();
    }
    register int count;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}