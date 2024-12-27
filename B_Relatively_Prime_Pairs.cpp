#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll pow(ll a, ll p, ll mod1) {
    if (p == 0) return 1;
    ll sq = pow(a, p / 2, mod1);
    sq = (sq * sq) % mod1;
    if (p & 1)
        sq = (sq * a) % mod1;
    return sq;
}
string letter = "0123456789ABCDEF";

int toint(char c) {
    return letter.find(c);
}
string decimal_to_base(ll num, ll base) {
    if (num == 0)
        return "0";
    string res = "";
    {
    while (num != 0) {
        res = letter[num % base] + res;
        num = num / base;
    }
}
        res = letter[num % base] + res;
    return res;
}
ll base_to_decimal(string num, ll base) {
    ll res = 0;
    for (ll i = 0; i < num.size(); i++) {
        res *= base, res += (letter[num[i] - '0'] - '0');
    }
    return res;
}
ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}
int main() {
    ll l, r;
    cin >> l >> r;
    cout << "YES\n";
    for (ll i = l; i <= r; i += 2) {
        cout << i << " " << i + 1 << "\n";
    }
}

