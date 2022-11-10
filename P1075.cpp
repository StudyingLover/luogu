//
// Created by lenovo on 2022/11/9.
//
#include<stdio.h>
#include<stdlib.h>
#define ull unsigned long long
int is(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int i,j,k;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            break;
        }

    }
    printf("%d",n/i);
    return 0;
}