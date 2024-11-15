#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mod =998244353,base=31 ;
const ll N = 4e5+1,M=1e5+1;
const ll INF = 2e9;

int nCr(int n, int r) {double sum = 1;for (ll i = 1; i <= r; i++) { sum = sum * (n - r + i) / i; }  return sum;}

ll gcd(ll x,ll y){//where x>y
if (y == 0) return x; return gcd(y,x%y);}

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);


    ll t;
    cin>>t;

      while(t--){
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n-2;i++){
            if(s.substr(i,3)=="map"||s.substr(i,3)=="pie")
            {
                c++;
                i+=2;
            }
        }
        cout<<c<<"\n";
         }

    return 0;
}
