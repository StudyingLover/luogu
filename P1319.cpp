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
    int i,j,k;
    int t;
    for(;;)
    {
        scanf("%d",&t);
        if(t==0)
            break;
        for(;t>0;t--)
        {

            if(c%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            if(t-1==0)
            {
                c++;
            }
            count++;
            if(count==n)
            {
                printf("\n");
                count=0;
//                c++;
            }
        }
    }
    return 0;
}