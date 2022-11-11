//
// Created by lenovo on 2022/11/11.
//
#include<bits/stdc++.h>
using namespace std;

int dx1[13]={2,0,-2,0,1,1,1,0,0,0,-1,-1,-1};
int dy1[13]={0,2,0,-2,0,1,-1,1,0,-1,0,1,-1};
int dx2[25]={-2,-2,-2,-2,-2,-1,-1,-1,-1,-1,0,0,0,0,0,1,1,1,1,1,2,2,2,2,2};
int dy2[25]={-2,-1,0,1,2,-2,-1,0,1,2,-2,-1,0,1,2,-2,-1,0,1,2,-2,-1,0,1,2};

int main()
{
    int m,n,k;
    int map[110][110];

    int i,j;
    int x,y,o,p;
    for(i=0;i<110;i++)
    {
        for(j=0;j<110;j++)
        {
            map[i][j]=0;
        }
    }
    scanf("%d%d%d",&n,&m,&k);
    for(i=0;i<m;i++)
    {

        scanf("%d%d",&x,&y);
//        printf("qwe\n");
        map[x][y]=1;
        for(j=0;j<13;j++)
        {
            o=x+dx1[j];
            p=y+dy1[j];
            if(o>=0&&o<n&&p>=0&&p<n)
            {
                map[o][p]=1;
            }
        }
    }
    if(k==0)
    {
//        printf("sdf");
        goto flag;
    }
    for(i=0;i<k;i++)
    {
//        printf("ads");
        scanf("%d%d",&x,&y);
        map[x][y]=1;
        for(j=0;j<25;j++)
        {
            o=x+dx2[j];
            p=y+dy2[j];
            if(o>=0&&o<n&&p>=0&&p<n)
            {
                map[o][p]=1;
            }
        }
    }
    flag:
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(map[i][j]==0)
            {
//                printf("a");
                count++;
            }
        }

    }
    printf("%d",count);
    return 0;

}