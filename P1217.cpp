//
// Created by lenovo on 2022/11/13.
//
#include<bits/stdc++.h>
using namespace std;

inline int read()
{
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9')
    {
        if(ch=='-')
        {
            f=-1;
        }
        ch=getchar();
    }
    while(ch>='0'&&ch<='9')
    {
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x*f;
}

void iwrite(int x)
{
    if (x < 0) putchar('-'), x = -x;
    if (x > 9) iwrite(x / 10);
    putchar(x % 10 + '0');
    return;
}

bool ok(int k)   //回文数
{
    int a[10],i=0;
    while (k>0){a[i]=k%10;k/=10;i++;}
    for(int j=0;j<i;j++)if(a[j]!=a[i-j-1])return false;
    return true;
}



int is[1999999]={1,1,0};
void is_prime(int n)
{
    int i,j,k;
    for(i=2;i<n;i++)
    {
        if(is[i])
        {
            continue;
        }
        for(j=2*i;j<n;j+=i)
        {
            is[j]=1;
        }
    }
}
int trad_prime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int mix_prime(int n)
{

    if(n<1999999)
    {
        return not is[n];
    }
    else
    {
        return trad_prime(n);
    }
}




int main()
{
    is_prime(1999999);

    int n,m;
    n=read();
    m=read();
//    prime(m);

    int i,j,k;

    for(i=n;i<=m;i++)
    {
        if(mix_prime(i)&&ok(i))
        {
              iwrite(i);
              putchar('\n');
        }
    }
    return 0;
}
