//
// Created by lenovo on 2022/11/14.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tmp,num=0,sum=0;
    while(cin>>tmp)
    {
        sum+=tmp;
        num++;
    }
    cout<<(long long)(sum<<(num-1));
    return 0;
}