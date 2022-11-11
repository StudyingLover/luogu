//
// Created by lenovo on 2022/11/9.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=1;
    auto len=s.length();
    if(len<=2)
    {
        cout<<s;
        return 0;
    }
    if(s[0]=='-')
    {
        printf("-");
        for(int i=len-1;i>=1;i--)
        {
//            if(i==1&&flag==0)
//            {
//                printf("0");
//                return 0;
//            }
            if(s[i]=='0'&&i!=1&&flag)
            {
                if(s[i-1]!='0')
                    flag=0;
                continue;
            }
            printf("%c", s[i]);
//            printf(" pos%d\n",i);
        }
    }
    else
    {
        for(int i=len-1;i>=0;i--)
        {
            if(s[i]=='0'&&i!=0&&flag)
            {
                if(i==0&&flag==0)
                {
                    printf("0");
                    return 0;
                }
                if(s[i-1]!='0')
                    flag=0;
                continue;
            }
            printf("%c", s[i]);
        }
    }
//    printf("%c",s[0]);
    return 0;
}
