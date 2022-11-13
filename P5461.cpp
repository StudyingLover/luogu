//
// Created by lenovo on 2022/11/13.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[1001][1001];

void func(int m,int x,int y)
{
    if(m==2)
    {
        a[x][y]=0;
        return;
    }
    int i,j;
    for(i=x;i<=x+m/2-1;i++)
    {
        for(j=x;j<=x+m/2-1;j++)
        {
             a[i][j]=0;
        }
    }
    func(m/2,m/2+x,y);
    func(m/2,m/2+x,y+m/2);
    func(m/2,x,y+m/2);


}

signed main()
{
    int n;
    cin>>n;
    n=pow(2,n);
//    int a[n][n];
    int i,j,k;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            a[i][j]=1;
        }
    }
    func(n,1,1);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-1; j++)
            cout<<a[i][j]<<" ";
        cout<<a[i][n]<<endl; //输出，此处可以避免输出行尾空格
    }

    return 0;
}
