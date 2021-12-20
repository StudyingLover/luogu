#include<stdio.h>
int main()
{
	int a[10];
    int c=0;
	for(int i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
		int b;
	scanf("%d",&b);
	for(int s=0;s<=9;s++)
	{
		if(a[s]<=(b+30))
		{
			c++;
		}
		
	}
	printf("%d",c);
}
    