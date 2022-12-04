//
// Created by lenovo on 2022/12/4.
//
#include<bits/stdc++.h>
using namespace std;

int is_prime(int n)
{
    if(n==0) return 0;
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int x[30];//x[i]代表第i选或不选，0代表选，1代表不选
using namespace std;
int main(){
    int n,r,sum=0;
    scanf("%d%d",&n,&r);//读入n、r
    for(int i=r+1;i<=n;++i)
        x[i]=1; //赋初始值
    do{
        sum=0;
        for(int i=1;i<=n;++i)
        {
            if(x[i]!=0) sum+=i;
            if(is_prime(sum)) printf("%d\n",sum);//如果是0就输出，注意三个常宽
        }

        printf("\n");//换行
    }while(next_permutation(x+1,x+n+1));//生成下一个
    return 0;//返回
}