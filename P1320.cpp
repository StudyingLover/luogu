//
// Created by lenovo on 2022/11/7.
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[1001];
    char s[3000];
    int i,j,k;
//    printf("%c",a[0]);
    scanf("%s",s);
    int len=strlen(s);
    strcat(a,s);
    for(i=1;i<len;i++)
    {
        scanf("%s",s);
        strcat(a,s);
    }

    printf("%d ",len);

    int count=0;
    char flag='0';
    for(i=1;i<=len*len;i++)
    {
        if(a[i]==flag)
        {
            count++;
        }
        else
        {
            printf("%d ",count);
            flag=a[i];
            count=1;
        }

    }
    printf("%d",count);
//    printf("%s",a);
    return 0;
}