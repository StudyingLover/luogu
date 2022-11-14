//
// Created by lenovo on 2022/11/14.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    char name[n][101];
    int age[n],score[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d",&name[i],&age[i],&score[i]);
    }
    for(i=0;i<n;i++)
    {
        age[i]++;
    }
    for(i=0;i<n;i++)
    {
        int sco=score[i]+score[i]*0.2;
        if(sco>600)
        {
            score[i]=600;
        }
        else
        {
            score[i]=sco;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s %d %d\n",name[i],age[i],score[i]);
    }
    return 0;
}