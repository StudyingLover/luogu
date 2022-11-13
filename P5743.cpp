//
// Created by lenovo on 2022/11/13.
//
#include<bits/stdc++.h>
using namespace std;

int a(int n)
{
    return (1<<n-1)*3-2;
}

int main()
{
    int n;
    cin >> n;
    cout<<a(n);
    return 0;
}