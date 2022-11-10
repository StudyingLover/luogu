 //
// Created by lenovo on 2022/11/7.
//
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i,j,k;
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    int used[10001];
    for (int l = 0; l < 10001; l++) {
        used[l] = 0;

    }

    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=j;k<n;k++)
            {
                if(j!=k)
                {
                    if(a[i]==a[j]+a[k]&&used[a[i]]==0)
                    {
                        count++;
                        used[a[i]]=1;
                    }
                }
            }
        }
    }
    printf("%d", count/2);
    return 0;
}