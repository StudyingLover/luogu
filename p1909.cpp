#include <stdio.h>
int main (void)
{
	int need = 0;
	int min[3] = {0};
	scanf("%d",&need);
	for (int i = 0; i<3 ; i++)
	{
		int cnt = 0;
		int price = 0;
		scanf("%d %d",&cnt,&price);
		int nowCnt = 0;
		int nowPrice = 0;
		while(nowCnt<need)
		{
			nowCnt+=cnt;
			nowPrice+=price;
		}
		min[i] = nowPrice;
	}
	int nowMin = min[0];
	if(min[1]<nowMin) nowMin = min[1];
	if(min[2]<nowMin) nowMin = min[2];
	printf("%d",nowMin);
	return 0;
}