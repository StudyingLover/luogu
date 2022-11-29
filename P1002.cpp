//
// Created by lenovo on 2022/11/29.
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ax,ay,mx,my,i,j,k;
    scanf("%d%d%d%d",&ax,&ay,&mx,&my);
    int fx[]={0,-2,-1, 1,2,2,1,-1,-2};
    int fy[]={0,1,2,2,1,-1,-2,-2,-1};
    long long f[401][401];
    bool s[401][401];
    ax+=2,ay+=2,mx+=2,my+=2;

    memset(f,0,sizeof(f));
    f[2][1]=1;
    s[mx][my] = 1;
    for(int i = 1; i <= 8; i++) s[mx + fx[i]][my + fy[i]] = 1;
    for(int i = 2; i <= ax; i++){
        for(int j = 2; j <= ay; j++){
            if(s[i][j]) continue; // 如果被马拦住就直接跳过
            f[i][j] = f[i - 1][j] + f[i][j - 1];
        }
    }
    printf("%lld\n", f[ax][ay]);

    return 0;
}