#include<cstdio>
#include<cmath>
int main ()
{
   int i , j,k,sum=0,cnt,s;
   int t;
   int a[12]={0};
   for(i=0;i<12;i++)
   { 
   scanf("%d",&a[i]);
   }
   for(i=0;i<12;i++)
   { 
   if(i==0)
   {
     if(300-a[i]>=0)
      {
    t=(300-a[i])/100;
    sum=300-a[i]-t*100;
      }
      if(300-a[i]<0)
      {
      printf("-1");
 }
   }
   }
     cnt=t;
    s=sum;
   for(i=1;i<12;i++)
   {
    if(s+300-a[i]>=0)
    {
    j=(s+300-a[i])/100;
    cnt+=j;
    s=s+300-a[i]-j*100;
    if(i==11)
    {
    printf("%d",s+cnt*120);
  }
   }
   else
   {
    printf("%d",-(i+1));
    goto t;
} 
   } 
    t:return 0;
} 