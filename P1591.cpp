#include <bits/stdc++.h>
using namespace std;
int c[100000];
int main()
{
    int t,n,a;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n>>a;
        for(int j=0;j<100000;j++)
        {
            c[j]=0;
        }
        c[0]=1;
        int l=1;
        for(int j=2; j<=n; j++)//开始阶乘计算
        {
            int w=0;
            for(int k=0; k<l; k++)//高精度乘单精度
            {
                c[k]=c[k]*j+w;
                w=c[k]/10;
                c[k]%=10;
            }
            while(w>0)//处理多进位
            {
                c[l]=w%10;
                l++;
                w/=10;
            }
        }
        int count=0;
        for(int j=0; j<l; j++)
            if(c[j]==a) count++;//统计个数
        cout<<count<<endl;
    }
    return 0;
}