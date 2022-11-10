//
// Created by lenovo on 2022/11/10.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int i,j,k;
    int s[100]={0};
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            for(k=1;k<=c;k++)
            {
                s[i+j+k]++;

            }
        }
    }
    int max=0;
    for(i=1;i<=a+b+c;i++)
    {
        if(s[i]>max)
        {
            max=s[i];
        }
    }
    for(i=1;i<=a+b+c;i++)
    {
        if(s[i]==max)
        {
            printf("%d",i);
            break;
        }
    }

    return 0;
}