#include <bits/stdc++.h>
#define ll long long int
using namespace std;

long long lcm(ll x,ll y) {
    return (x / __gcd(x, y)) * y;
}
int main() {
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;

    ll T1 = n / a;
    ll b_t = n / b;
    ll c_t = n / lcm(a, b);

    ll total_choc = T1 * p + b_t*q - c_t * min(p, q);
    cout << total_choc<< endl;
}

