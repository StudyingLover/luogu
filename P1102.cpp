//
// Created by lenovo on 2022/11/30.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    scanf("%d%d",&n,&c);
    int a[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int vis[n][n];
    memset(vis,0,sizeof(vis));
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(i==j)
                continue;
            if(a[j]-a[i]==c)
            {
                if(vis[i][j]==0)
                {
                    count++;
                    vis[i][j]=1;
                    vis[j][i]=1;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}