//
// Created by lenovo on 2022/11/11.
//
#include<bits/stdc++.h>
using namespace std;
double dis(double x1,double y1,double x2,double y2 )
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main()
{
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double a=dis(x1,y1,x2,y2);
    double b=dis(x1,y1,x3,y3);
    double c=dis(x2,y2,x3,y3);
    double ans=a+b+c;
    printf("%.2lf",ans);
    return 0;
}