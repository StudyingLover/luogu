//
// Created by lenovo on 2022/11/6.
//
#include<stdio.h>

int in_num(int a,int b[],int len)
{
    int i,count=0;
    for(i=0;i<len;i++)
    {
        if(a==b[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    int m[7];
    int i,j,k;
    int number[8]={0};
    scanf("%d",&n);
    for(i=0;i<7;i++)
    {
        scanf("%d",&m[i]);
    }

    for(i=0;i<n;i++)
    {
        int count=0;
        int temp[7];
        for(j=0;j<7;j++)
        {
            scanf("%d",&temp[j]);
            count+=in_num(temp[j],m,7);

        }
        number[count]++;
    }
    for(i=7;i>0;i--) {
        printf("%d ", number[i]);
    }
//    printf( "%d ", number[8]);
    return 0;
}