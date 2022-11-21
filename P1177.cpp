//
// Created by lenovo on 2022/11/21.
//
#include<bits/stdc++.h>
using namespace std;
void quick(int a[],int low,int high)
{
    int first=low;
    int last=high;
    int block=a[first];
    if(first>=last)
    {
        return;
    }
    while(first<last)
    {
        while(first<last&&a[last]>=block)
        {
            last--;
        }
        a[first]=a[last];
        while(first<last&&a[first]<=block)
        {
            first++;
        }
        a[last]=a[first];
    }
    a[first]=block;
    quick(a,low,first-1);
    quick(a,first+1,high);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}