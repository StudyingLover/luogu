//
// Created by lenovo on 2022/11/26.
//
#include<bits/stdc++.h>
using namespace std;

inline int read ()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}

int main()
{
    register int n, m, i, j, k, ans = 0;
    n = read();
    int a[10];
    for(a[0]=1;a[0]<=3;a[0]++)
    {
        for(a[1]=1;a[1]<=3;a[1]++)
        {
            for(a[2]=1;a[2]<=3;a[2]++)
            {
                for(a[3]=1;a[3]<=3;a[3]++)
                {
                    for(a[4]=1;a[4]<=3;a[4]++)
                    {
                        for(a[5]=1;a[5]<=3;a[5]++)
                        {
                            for(a[6]=1;a[6]<=3;a[6]++)
                            {
                                for(a[7]=1;a[7]<=3;a[7]++)
                                {
                                    for(a[8]=1;a[8]<=3;a[8]++)
                                    {
                                        for(a[9]=1;a[9]<=3;a[9]++)
                                        {
                                            if(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]==n)
                                            {
                                                ans++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",ans);
    for(a[0]=1;a[0]<=3;a[0]++)
    {
        for(a[1]=1;a[1]<=3;a[1]++)
        {
            for(a[2]=1;a[2]<=3;a[2]++)
            {
                for(a[3]=1;a[3]<=3;a[3]++)
                {
                    for(a[4]=1;a[4]<=3;a[4]++)
                    {
                        for(a[5]=1;a[5]<=3;a[5]++)
                        {
                            for(a[6]=1;a[6]<=3;a[6]++)
                            {
                                for(a[7]=1;a[7]<=3;a[7]++)
                                {
                                    for(a[8]=1;a[8]<=3;a[8]++)
                                    {
                                        for(a[9]=1;a[9]<=3;a[9]++)
                                        {
                                            if(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]==n)
                                            {
//                                                ans++;
                                                  printf("%d %d %d %d %d %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
