//
// Created by lenovo on 2022/11/30.
//
#include<bits/stdc++.h>
using namespace std;

int func(int a,int b,int c,int d,int x)
{
    return a*pow(x,3)+b*pow(x,2)+c*x+d;
}

inline int read()
{
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9')
    {
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9')
    {
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x*f;
}

int main()
{
    int a,b,c,d;
    a=read(),b=read(),c=read(),d=read();
    int i,j,k,s;
    double l,r,x1,x2;
    for(i=-100;i<=100;i++)
    {
        l=i;r=i+1;
        x1=func(a,b,c,d,l);
        x2=func(a,b,c,d,r);
        if(!x1)
        {
            printf("%.2lf ",l);
            s++;
        }
        if(x1*x2<0)
        {
            for(j=1;j<=100;j++)
            {
                k=(l+r)/2;
                if(func(a,b,c,d,k)*x1<0)
                {
                    r=k;
                }
                else
                {
                    l=k;
                }
            }
            printf("%.2lf ",l);
            s++;
        }
        if(s==3)
        {
            break;
        }
    }

    return 0;
}