#include<iostream>
#include<unordered_map>
#include<string>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	unordered_map<string,ll>m;
	while(n--)
	{
		string s;
		cin>>s;
		if(m.find(s)==m.end())
		{
			m[s]=0;
			cout<<"OK"<<endl;
		}
		else
		{
			m[s]++;
			cout<<s<<m[s]<<endl;
		}
	}
	return 0;
}

