//
// Created by lenovo on 2022/11/23.
//
#include<bits/stdc++.h>

int main()
{
    int m,n,i,j,k;
    scanf("%d%d",&n,&m);
    int a[m];
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    std::sort(a,a+m);
    for(i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}