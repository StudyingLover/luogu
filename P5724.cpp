//
// Created by lenovo on 2022/11/9.
//
#include<bits/stdc++.h>
using namespace std;

void quick(int a[],int low,int high)
{
    int i=low,j=high;
    int temp=a[low];
    if(low>=high)
        return;
    while(i<j)
    {
        while(i<j&&a[j]>=temp)
            j--;
        a[i]=a[j];
        while(i<j&&a[i]<=temp)
            i++;
        a[j]=a[i];
    }
    a[i]=temp;
    quick(a,low,i-1);
    quick(a,i+1,high);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quick(a,0,n-1);
    printf("%d",a[n-1]-a[0]);

}