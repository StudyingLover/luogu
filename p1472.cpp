#include<stdio.h>
int a[101];
int ans[101];
int main()
{
    int n=0;
    for(int i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        n++;
        if(a[i]==0) 
        break;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
        	ans[i]=a[i];
		}
        if(a[i]==0)
        {
        	break;
		}
    }
    for(int i=n-2;i>=0;i--)
    {
        printf("%d ",ans[i]);
    }
    return 0;
}