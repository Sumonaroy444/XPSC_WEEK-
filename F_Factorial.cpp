#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

vector<ll> fact(int n) {
    vector<ll> factorial(n+1, 1);
    for (int i=2; i<=n;i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
    return factorial;
}
int main() {
    vector<ll> factorial = fact(1000);
    int t;
    cin >>t;
    while (t--) {
        int n;
        cin >> n;
        cout << factorial[n] << endl;
    }
}

