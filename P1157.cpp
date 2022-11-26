//
// Created by lenovo on 2022/11/26.
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    int a[n];
    register int i,j,k;
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    while(next_permutation(a,a+n))
    {
//        printf("%d %d %d\n",a[0],a[1],a[2]);
          for(j=0;j<n;j++)
          {
              printf("%d ",a[j]);
          }
            printf("\n");
    }
    return 0;
}