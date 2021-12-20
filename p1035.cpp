#include<stdio.h>
int main()
{
    int k,n;
    double a=0.0;
    scanf("%d",&k);
    for(n=1;;n++)
    {
     a=1.0/n+a;
     if(a>k*1.0)
     break;
    }
    printf("%d",n);
    return 0;
}