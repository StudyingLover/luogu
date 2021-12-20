#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double m,t,s;
    cin>>m>>t>>s;
    if(t==0)cout<<m<<endl;  //特判
    else cout<<m-min(int(m),int(ceil(s/t)))<<endl;
    return 0;
}