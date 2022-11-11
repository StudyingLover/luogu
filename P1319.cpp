//
// Created by lenovo on 2022/11/9.
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int count=0;
    int c=2;
    int x=1;
    int i,j,k;
    int t;
    for(;;)
    {
        x=not x;
        scanf("%d",&t);
        if(t==0)
            break;
        i=t;
        for(;i>0;i--)
        {
            printf("%d",x);
            count++;
            if(count==n)
            {
                printf("\n");
                count=0;
            }

        }


    }
    return 0;
}