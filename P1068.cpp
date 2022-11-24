//
// Created by lenovo on 2022/11/24.
//
#include<bits/stdc++.h>
using namespace std;

struct stu{
    int id;
    int score;
}a[10001];

bool com(stu s1,stu s2)
{
    if(s1.score==s2.score)
        return s1.id<s2.id;
    return s1.score>s2.score;
}

inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}

int main()
{
    int n,m;
    n=read();
    m=read();
    m=floor(m*1.5);
    for(int i=0;i<n;i++)
    {
        a[i].id=read();
        a[i].score=read();
    }
    sort(a,a+n,com);
    int score_line=a[m-1].score;
    register int i,j,k,count=0;
    for(i=0;;i++)
    {
        if(a[i].score<score_line)
            break;
        count++;
//        printf("%d %d\n",a[i].id,a[i].score);
    }
    printf("%d %d\n",score_line,count);
    for(i=0;i<count;i++) {
        printf("%d %d\n", a[i].id, a[i].score);
    }
    return 0;
}

