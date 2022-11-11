//
// Created by lenovo on 2022/11/11.
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
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    prime(1000005);
    for(i=0;i<n;i++)
    {
        if(is[a[i]]==0)
        {
            cout <<a[i];
            if(i!=n-1)
            {
                cout<<" ";
            }
        }
    }


    return 0;
}
