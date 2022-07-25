#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float s,v;
    cin>>s>>v;
    float t1=s/v;
    float sum_time=8*60;
    int t=ceil(t1)+10;
    float left_time=sum_time-t;

    cout<<t;
}