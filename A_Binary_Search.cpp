#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    for (int i = 0; i < k; i++) {
        int key;
        cin>>key;
        int l = 0, r = n - 1,mid;
        bool flag = false;
        while (l <= r) {
             mid = l + (r - l) / 2;
            if (v[mid] == key) {
                flag = true;
                break;
            }
            else if (v[mid] < key) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

