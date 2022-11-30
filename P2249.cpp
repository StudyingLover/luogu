//
// Created by lenovo on 2022/11/30.
//
#include<bits/stdc++.h>
using namespace std;
int n,m,q,i,j,k;
int a[1000005];
inline int read() {
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
int find(int x) //二分查找
{
    int l=1,r=n;
    while (l<r)
    {
        int mid=l+(r-l)/2;
        if (a[mid]>=x) r=mid;
        else l=mid+1;
    }

    if (a[l]==x) return l; //找都了就输出他的位置
    else return -1; // 没找到输出-1
}

int main()
{
    n=read();
    m=read();
    for(i=1;i<=n;i++)
        a[i]=read();
    for (i=1;i<=m;i++)
    {
        q=read();
        int ans=find(q); //看看查找的结果
        printf("%d ",ans);
    }
    return 0;
}