#include <bits/stdc++.h>

using namespace std;
#define ll             long long
#define vi             vector <int>
#define pii            pair <int, int>
#define mii            map <int, int>
#define vpi            vector <pii>
#define mpi            map <pii, int>
#define spi            set <pii>
#define si             set <int>

int main()
{
    ll t;
    cin>>t;
    while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	    vector<string>v;
	    while(n--)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        ll sum=0,men=0;
          for(ll j=0;j<m;j++)
          {
            men+=abs((int)v[0][j]-(int)v[1][j]);
          }
     for(ll i=0;i<v.size()-1;i++)
     {
          for(ll k=i+1;k<v.size();k++)
          {
              sum=0;
              for(ll j=0;j<m;j++)
              {
                sum+=abs((int)v[i][j]-(int)v[k][j]);
              }
              if(sum<=men)
              {
                  men=sum;
              }
          }
     }
        cout<<men<<endl;
	}
    return 0;
}
