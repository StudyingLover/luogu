//
// Created by lenovo on 2022/11/24.
//
#include<bits/stdc++.h>
using namespace std;
inline int read () {
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}

struct point{
    int x,y,z;
}points[100001];

bool compare(point a,point b){
    return a.z<b.z;
}

double dis(point a,point b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
}

int main()
{
    int n;
    n=read();
    register int i,j,k;
    for(i=0;i<n;i++){
        points[i].x=read();
        points[i].y=read();
        points[i].z=read();
    }
    sort(points,points+n,compare);
    double sum=0;
    for(i=0;i<n-1;i++)
    {
        sum+=dis(points[i],points[i+1]);
    }
    printf("%.3lf",sum);
    return 0;
}
