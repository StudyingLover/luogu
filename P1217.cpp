//
// Created by lenovo on 2022/11/13.
//
#include<bits/stdc++.h>
using namespace std;
int is[100000000]={1,1,0};
void prime(int n)
{
    int i,j,k;
    for(i=2;i<n;i++)
    {
        if(is[i])
        {
            continue;
        }
        for(j=2*i;j<n;j+=i)
        {
            is[j]=1;
        }
    }
}

bool pd_h(int x)
{

    int y=x,num=0;//int y=x,防止x被改变
    while (y!=0)
    {
        num=num*10+y%10;//上一次数字的记录进位再加上下一位数
        y/=10;
    }
    if (num==x) return 1;
    else return 0;
}


int main()
{

    int n,m;
    cin>>n>>m;
    prime(m);
    int i,j,k;
//    cout<<is[4];
//    for(i=n;i<=m;i++)
//    {
//        if(pd_h(i)&&!is[i])
//        {
//            cout<<i<<endl;
//        }
//    }
    for(i=1;i<=100000000;i++)
    {
        printf("%d,",is[i]);
    }
    return 0;
}
