//
// Created by lenovo on 2022/11/10.
//
#include<bits/stdc++.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
    int i,j,k;
    int sum=0,ans=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        sum+=a[i];
    }
    ans=sum;
    for(i=m;i<n;i++)
    {
        sum-=a[i-m];
        sum+=a[i];
        ans=(ans<sum)?ans:sum;
//        printf("%d\n",ans);
    }
    printf("%d",ans);
    return 0;
}