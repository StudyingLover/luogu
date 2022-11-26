//
// Created by lenovo on 2022/11/26.
//
#include<bits/stdc++.h>
using namespace std;

//int a(int n)
//{
//    if(n==0)
//    {
//        return 0;
//    }
//    else if(n==1)
//    {
//        return 1;
//    }
//    else if(n==2)
//    {
//        return 2;
//    }
//    else
//    {
//        return a(n-1)+a(n-2);
//    }
//
//}

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int n1=n+1;
    long long a[n1];
    a[0]=0;
    a[1]=1;
    a[2]=2;
    for(i=3;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("%d",a[n]);
}