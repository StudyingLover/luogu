//
// Created by lenovo on 2022/11/13.
//
#include<bits/stdc++.h>

int func(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n*func(n-1);
}

using namespace std;

int main()
{
    int n;
    cin>>n;
    printf("%d",func(n));


    return 0;
}