//
// Created by lenovo on 2022/11/18.
//
#include<bits/stdc++.h>
using namespace std;

inline void func(int i,int a,int n)
{
    if(a)
    {  //  判0系数
        if(i!=n&&a>0)cout<<"+";   // 根据正负、是否为最高此项决定加号
        if(abs(a)>1||i==0)cout<<a; //   输出系数（系数不为正负1或指数为0）
        if(a==-1&&i)cout<<"-"; //  -1系数特判，常数项已特判
        if(i>1)cout<<"x^"<<i;//    二次及以上输出指数
        if(i==1)cout<<"x";   // 一次项
    }
}


int main()
{
    int n;
    scanf("%d", &n);
    n=n+1;
    int a[n];
    int i,j,k;
    for(i=n-1;i>=0;i--)
    {
        scanf("%d",&a[i]);
    }
//    for(i=0;i<n;i++)
//    {
//        printf("%d ",a[i]);
//    }
//    printf("\n");
    for(i=n-1;i>=0;i--)
    {
        func(i,a[i],n-1);

    }

    return 0;
}