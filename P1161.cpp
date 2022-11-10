//
// Created by lenovo on 2022/11/10.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int light[1000000]={0};
    int n;
    scanf("%d",&n);
    double i,j,k;
    int q;
    double a;

    for(i=0;i<n;i++)
    {
        scanf("%lf%d",&a,&q);
        for(i=1;;i++)
        {
//            if(a*i>1000000.0)
//                break;
//            light[(int)(a*i)]+=q;
              printf("%lf\n",a*i);

        }

    }


    return 0;
}