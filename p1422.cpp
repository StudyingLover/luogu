#include<stdio.h>
int main()
{
int a;
double b;
scanf("%d",&a);

    if (a<=150)
    {
	b=0.4463*a;
    } 
      if (150<=a<=400)
    {
	b=0.4663*(a-150)+0.4463*150;
    } 
      if (a>=401)
    {
	b=0.5663*(a-400)+0.4663*250+0.4463*150;
    } 
    printf("%.1f",b);
}