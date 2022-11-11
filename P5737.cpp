//
// Created by lenovo on 2022/11/11.
//
#include<bits/stdc++.h>
using namespace std;
int run_year(int sun)
{
    int i;
    if(sun%4==0 && sun%100 !=0 || sun%400==0)
    {
        i=1;
    }
    else
    {
        i=0;
    }
    return i;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=0;
    int i;
    for(i=a;i<=b;i++)
    {
        if(run_year(i)==1)
        {
            sum++;
        }
    }
    printf("%d",sum);
    if(sum==0)
    {
        return 0;
    }
    else
    {
        printf("\n");
    }
    for(i=a;i<=b;i++)
    {
        if(run_year(i)==1)
        {
            printf("%d",i);
            if(i!=b)
            {
                printf(" ");
            }
        }
    }
    return 0;
}
