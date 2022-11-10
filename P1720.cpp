//
// Created by lenovo on 2022/11/9.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    double a[52];
    a[0]=0;
    a[1]=1;
    a[2]=1;
    for(int i=3;i<=52;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("%.2lf",a[n]);

}