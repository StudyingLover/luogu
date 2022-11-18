//
// Created by lenovo on 2022/11/16.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int m, n, i, j, k;
    char temp;
    cin >> m >> n;
    int a[1001][1001];

    for (i = 0; i < 101; i++)
    {
        for (j = 0; j < 101; j++)
        {
            a[i][j] =0;
        }
    }

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> temp;
            if(temp=='*')
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j] = 0;
            }
        }

    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==1)
            {
                printf("*");
            }
            else
            {
                printf("%d",a[i+1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i][j+1]+a[i][j-1]+a[i-1][j+1]+a[i-1][j]+a[i-1][j-1]);
            }
        }
        printf("\n");
    }






    return 0;
}