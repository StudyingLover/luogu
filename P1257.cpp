//
// Created by lenovo on 2022/11/21.
//
#include<bits/stdc++.h>
using namespace std;

struct node{
    double x,y;
}a[100001];

double dis(double x1,double y1,double x2,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main()
{
    double ans=1000.0000;
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%lf%lf",&a[i].x,&a[i].y);
    }
    ans=dis(a[0].x,a[0].y,a[1].x,a[1].y);
//    ans=dis(1.0,1.0,2.0,2.0);
//    printf("%lf\n",ans);

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        {
//            ans=min(ans,dis(a[i].x,a[i].y,a[j].x,a[j].y));
//            printf("%lf %lf %lf %lf %lf\n",a[i].x,a[i].y,a[j].x,a[j].y,dis(a[i].x,a[i].y,a[j].x,a[j].y));
              ans=min(ans,dis(a[i].x,a[i].y,a[j].x,a[j].y));
        }
    printf("%.4lf",ans);
    return 0;
}