#include<bits/stdc++.h>
using  namespace  std;
#define ll long long int
bool prime(int n)
{
    if(n<2)
      return false;
    if(n<=3)
      return true;
    if(n%2==0)
       return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
set<ll>s;
void cntDivisor(ll n)
{
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
                ll x=i;
                ll y=n/i;
                s.insert(x);
                s.insert(y);
        }
    }
}
int main()
{
    ll n,k;
    cin>>n>>k;
    cntDivisor(n);
    vector<ll>v;
    v.assign(s.begin(),s.end());
    if(k>v.size())
     cout<<-1<<endl;
    else
      cout<<v[k-1]<<endl;
}

