#include <iostream>
#include <string>
#define ll long long
using namespace std;
ll nb,ns,nc,pb,ps,pc,B,S,C,o;
bool valid(ll x)//جوا الفاليد بستقبل الاشي الي ع اساسو بتكون المصفوفة 0 او 1
{
  ll ib=(x*B)-(nb);//الكمية الي بنحتاجها لصنع اكس من البرجر -الكمية الي موجودة عنا بالاصل =الكمية الي محتاجين نشتريها
  ll is=(x*S)-(ns);
  ll ic=(x*C)-(nc);
  if (ib<0)ib=0;//اذا الكمية الي متاحين نشتريها طلععت بالسالب بنحولها لصفر
  if (is<0)is=0;
  if (ic<0)ic=0;
  ll tp=(ib*pb)+(is*ps)+(ic*pc);
  return tp<=o;
}
int main()
{
    //L 11111111111110000000000000 R
    string s;
    cin>>s;

    for(ll i=0;i<s.length();i++)//لوب لتحسب عدد الخبز و النقانق والجبنة الي عنا لنطرح منها لقدام العدد الكل الي بنحتاجو ونشوف قديه ناقصنا لنشتري
    {
        if (s[i]=='S')S++;
        if (s[i]=='B')B++;
        if (s[i]=='C')C++;
    }
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>o;
    ll l=1,r=1;
    if(!valid(1))
    {
        cout<<"0";
    }
    else{
    while(valid(r))
    {
        r*=2;
    }
    while(l+1<r)
    {
        ll m=(l+r)/2;
        if(valid(m))
        {
            l=m;
        }
        else
        {
            r=m;
        }
    }
    cout<<l;
    }

    return 0;
}
