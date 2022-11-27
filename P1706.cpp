//
// Created by lenovo on 2022/11/27.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    printf("    ");
    for(i=0;i<n;i++)
    {
        printf("%-4d ",a[i]);
    }
    printf("\n");
    while(next_permutation(a,a+n))
    {
        printf("    ");
//        printf("%d %d %d\n",a[0],a[1],a[2]);
        for(j=0;j<n;j++)
        {
            printf("%-4d ",a[j]);
        }
        printf("\n");
    }
    return 0;
}