#include<stdio.h>
int main()
{
	int i,a,b,c,max=0,maxi=0;
	for(i=1;i<=7;i++)
	{
		scanf("%d%d",&a,&b);
		c=a+b;
		if(c>8&&c>max)
		{
			max=c;
			maxi=i;
		}
	}
	printf("%d",maxi);
}