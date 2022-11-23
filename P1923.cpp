//
// Created by lenovo on 2022/11/23.
//
#include<bits/stdc++.h>

void quick(int a[],int l,int r)
{
    if(l>=r)
        return;
    int i=l,j=r;
    int x=a[l];
    while(i<j)
    {
        while(i<j&&a[j]>=x)
            j--;
        if(i<j)
            a[i++]=a[j];
        while(i<j&&a[i]<x)
            i++;
        if(i<j)
            a[j--]=a[i];
    }
    a[i]=x;
    quick(a,l,i-1);
    quick(a,i+1,r);
}

inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){ if(ch=='-') f=-1; ch=getchar(); }
    while(ch>='0'&&ch<='9') { x=(x<<1)+(x<<3)+(ch^48); ch=getchar(); }
    return x*f;
}

void write(int x)
{
    if (x < 0) putchar('-'), x = -x;
    if (x > 9) write(x / 10);
    putchar(x % 10 + '0');
    return;
}

using namespace std;

int main()
{
    register int n,m,i,j,k;
    n=read();
    m=read();
    int a[n];
    for(i=0;i<n;i++)
//        cin>>a[i];

        a[i]=read();
//    quick(a,0,n-1);
    sort(a,a+n);
    printf("%d",a[m]);
    return 0;
}