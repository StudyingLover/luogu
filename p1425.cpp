#include<iostream>
using namespace std;
int main()
{int a,b,c,d;
cin>>a>>b>>c>>d;
int x=a*60+b,y=c*60+d;
int z=y-x;
int e=z/60;
int f=z%60;
cout<<e<<" "<<f;
}