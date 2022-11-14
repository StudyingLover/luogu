//
// Created by lenovo on 2022/11/14.
//
#include<bits/stdc++.h>
using namespace std;

int is[1000005]={1,1,0};
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

int main()
{
    int n;
    cin>>n;
    int i,j,k;
    prime(n);
    for(i=4;i<=n;i+=2)
    {
        for(j=1;j<=n;j++)
        {
            if(is[j]==0&&is[i-j]==0)
            {
                cout<<i<<"="<<j<<"+"<<i-j<<endl;
                break;
            }

        }
    }
    return 0;
}