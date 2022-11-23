//
// Created by lenovo on 2022/11/23.
//
#include<bits/stdc++.h>
using namespace std;

struct s{
    int number;
    int chinese,math,english;
    int sum;
}student[1000];

bool com(s s1,s s2)
{
    if(s1.sum!=s2.sum)
        return s1.sum>s2.sum;
    else if(s1.chinese!=s2.chinese)
        return s1.chinese>s2.chinese;
    else
        return s1.number<s2.number;
}

inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){ if(ch=='-') f=-1; ch=getchar(); }
    while(ch>='0'&&ch<='9') { x=(x<<1)+(x<<3)+(ch^48); ch=getchar(); }
    return x*f;
}

int main()
{
    int n;
    n=read();
    for(int i=0;i<n;i++)
    {
        student[i].number=i+1;
        student[i].chinese=read();
        student[i].math=read();
        student[i].english=read();
        student[i].sum=student[i].chinese+student[i].math+student[i].english;
    }
    sort(student,student+n,com);
    for(int i=0;i<5;i++)
    {
        cout<<student[i].number<<" "<<student[i].sum<<endl;
    }
    return 0;
}