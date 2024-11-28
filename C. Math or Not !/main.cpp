#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mod =998244353,base=31 ;
const ll N = 4e5+1,M=1e5+1;
const ll INF = 2e9;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    set<ll> st;
    for (int i=0;i*i<=n;i++)
    {
        st.insert(i*i);
    }
    for (int i=0;i*i*i<=n;i++)
    {
        st.insert(i*i*i);
    }
    cout<<st.size()-1<<endl;
}

    return 0;
}
