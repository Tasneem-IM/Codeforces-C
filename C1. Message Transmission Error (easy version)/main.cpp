#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,cu,ned;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        cu=s[0];
        ned=s[1];
        while(cu!=ned)
        {
        cu.push_back(s[i]);
        ned.push_back(s[i+1]);
        }
    }
    return 0;
}
