//
// Created by lenovo on 2022/11/13.
//
#include<bits/stdc++.h>
using namespace std;

void quick(int a[],int low,int high)
{
    int first=low;
    int last=high;
    int key=a[first];
    if(first<last)
    {
        while(first<last)
        {
            while(first<last&&a[last]>=key)
                --last;
            a[first]=a[last];
            while(first<last&&a[first]<=key)
                ++first;
            a[last]=a[first];
        }
        a[first]=key;
        quick(a,low,first-1);
        quick(a,first+1,high);
    }
}


double func(int a[],int len)
{
//    int len=sizeof(*a)/sizeof(a[0]);
    quick(a,0,len);
    double sum=0;
    int i;
    for(i=1;i<len-1;i++)
    {
        sum+=a[i];

    }
    double score=sum/(len-2);
    return score;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    int i,j;
    double ans[n];
    for(i=0;i<n;i++)
    {
        ans[i]=-1.00;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[j];
        }
        ans[i]=func(a,m);
    }
    double max=0;
    for(i=0;i<n;i++)
    {
        if(ans[i]>max)
        {
            max=ans[i];
        }
    }
    printf("%.2f",max);
//    int a[5]={2,3,1,4,5};
//    int i;
//    quick(a,0,4);
//    for(i=0;i<5;i++)
//    {
//        cout<<a[i]<<" ";
//    }
//    cout<<func(a,5);
    return 0;
}