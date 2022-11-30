//
// Created by lenovo on 2022/11/30.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b>0)
    {
        printf("%d",abs(a));
    }
    else
    {
        printf("%d",-abs(a));
    }
    return 0;
}