//
// Created by lenovo on 2022/11/7.
//
#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int i,j,k;
    int num[10];
    for(i=0;i<10;i++)
    {
        num[i]=0;
    }
    for(i=m;i<=n;i++)
    {
        int t=i;
        while(t>0)
        {
            num[t%10]++;
            t=t/10;
        }

    }

    for(i=0;i<10;i++)
    {
        printf("%d",num[i]);
        if(i!=9) printf(" ");
    }
    return 0;
}