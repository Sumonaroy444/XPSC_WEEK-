#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;

ll exponent(ll base, ll expo, int mod) {
    ll res = 1;
    while (expo > 0) {
        if (expo % 2 == 1) {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        expo /= 2;
    }
    return res;
}
int main() {
    int n;
    cin >> n;
    while (n--) {
        ll a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) {
            cout << 1 << "\n";
        }
        else {
            cout <<exponent(a, b, MOD) << "\n";
        }
    }
}
