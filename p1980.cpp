#include <stdio.h>
int main()
{
    int n,x,j=0;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++){
        int d=i;
        while(d>0)
		{
            int c=d%10;
            d=d/10;
            if(c==x)
			{
                j++;
            }
        }
    }
    printf("%d",j);
    return 0;
}