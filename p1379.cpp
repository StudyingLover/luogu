#include<bits/stdc++.h>
using namespace std;

string ans="123804765";
string s;
int f[4]={1,3,-1,-3};
int anss=0x7ffffff;
map<string,bool>m;

bool check(int x) {return (x<=8 && x>=0);}

int bfs(int sum,string now,int num)//num表示当前0的位置 
{
	if(now==ans) 
	{
		cout<<sum<<endl;	
	}
	if(now==ans) return anss=min(anss,sum);
	if(m[now]==1 || sum>11) return 0;
	m[now]=1;
	for(int i=0;i<=3;i++)
	{
		if(check(num+f[i]))
		{
			string a=now;
			a[num+f[i]]=now[num]; 
			a[num]=now[num+f[i]];
			bfs(sum+1,a,num+f[i]);
		}
	}
}

int main()
{
	s="283104765";
	int n=s.find('0');
	bfs(0,s,n);
	cout<<anss<<endl;
	return 0;
}

