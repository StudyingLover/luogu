//
// Created by lenovo on 2022/11/6.
//
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n],b[n],c[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
        scanf("%d", &c[i]);
    }
    int count= 0;
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if(abs(a[i]-a[j])<=5&&abs(b[i]-b[j])<=5&&abs(c[i]-c[j])<=5&&abs(a[i]+b[i]+c[i]-a[j]-b[j]-c[j])<=10)
            {
                count++;
//                printf("%d %d\n",i,j);
            }
        }
    }

    printf("%d",(count)/2);
    return 0;
}