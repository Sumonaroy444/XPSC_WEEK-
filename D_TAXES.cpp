#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll small_divisor(ll n) {
    for (ll i = 2;i*i<=n;i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}
int main() {
    ll n;
    cin >> n;
    ll divisor = small_divisor(n);
    if (divisor == n) {
        cout << n - 1 << endl;
    }
    else {
        cout << divisor << endl;
    }
}

