//
// Created by lenovo on 2022/11/13.
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char name[n][100];
    int chinese[n];
    int math[n];
    int english[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        cin>>name[i]>>chinese[i]>>math[i]>>english[i];
    }
    int score[n];
    for(i=0;i<n;i++)
    {
        score[i]=chinese[i]+math[i]+english[i];
    }
    int max=0;
    for(i=0;i<n;i++)
    {
        if(score[i]>score[max])
        {
            max=i;
        }
    }
    cout<<name[max]<<" "<<chinese[max]<<" "<<math[max]<<" "<<english[max];
    return 0;
}