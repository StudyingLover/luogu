//
// Created by lenovo on 2022/11/9.
//
#include<stdio.h>
#include <stdio.h>

int is_in(int a[],int len ,int b)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(a[i]==b)
        {
            return 1;
        }
    }
    return 0;
}

void quicl(int a[],int low,int high)
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
    quicl(a,low,first-1);
    quicl(a,first+1,high);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    for(i=0;i<n;i++)
    {
        b[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        if(is_in(b,n,a[i])==0)
        {
            b[i]=a[i];
        }
    }
    quicl(b,0,n-1);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]!=-1)
        {
            count++;
        }
    }
    printf("%d\n",count);
    for(i=0;i<n;i++)
    {
        if(b[i]!=-1)
        {
            printf("%d",b[i]);
            if(i!=n-1)
            {
                printf(" ");
            }
        }
    }

    return 0;
}